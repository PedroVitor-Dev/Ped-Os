#!/usr/bin/env sh
set -eu

version_root="$(CDPATH= cd -- "$(dirname -- "$0")" && pwd)"
repo_root="$(CDPATH= cd -- "$version_root/../.." && pwd)"
profile_src="$version_root/profile"
build_root="$version_root/.work"
profile_build="$build_root/profile"
work_dir="$version_root/work"
out_dir="$version_root/out"

log() {
    printf '[uNexus ISO 0.0.1] %s\n' "$*"
}

need_command() {
    if ! command -v "$1" >/dev/null 2>&1; then
        printf '[uNexus ISO 0.0.1] missing command: %s\n' "$1" >&2
        exit 1
    fi
}

if [ "$(id -u)" -ne 0 ]; then
    printf '[uNexus ISO 0.0.1] run as root: sudo sh ISO/0.0.1/build-iso.sh\n' >&2
    exit 1
fi

need_command mkarchiso
need_command rsync

log "preparing profile"
rm -rf "$build_root"
mkdir -p "$profile_build/airootfs/opt"
mkdir -p "$work_dir" "$out_dir"

rsync -a "$profile_src/" "$profile_build/"
rsync -a \
    --exclude '.git' \
    --exclude 'ISO/0.0.1/.work' \
    --exclude 'ISO/0.0.1/work' \
    --exclude 'ISO/0.0.1/out' \
    --exclude '**/build' \
    --exclude '**/.qt' \
    "$repo_root/" "$profile_build/airootfs/opt/unexus-os/"

chmod +x "$profile_build/airootfs/root/customize_airootfs.sh"

log "building ISO"
mkarchiso -v -w "$work_dir" -o "$out_dir" "$profile_build"

log "done: $out_dir"
