#!/usr/bin/env sh
set -eu

prefix="${PREFIX:-/usr}"

rm -f "${prefix}/bin/unexus-shell"
rm -f "${prefix}/bin/unexus-session"
rm -f "${prefix}/bin/unexus-recovery-session"
rm -f "${prefix}/bin/unexus-doctor"
rm -f "${prefix}/bin/unexusctl"
rm -f "${prefix}/share/applications/io.github.PedroVitorDev.uNexusShell.desktop"
rm -f "${prefix}/share/wayland-sessions/unexus.desktop"
rm -f "${prefix}/share/wayland-sessions/unexus-recovery.desktop"
rm -f "${prefix}/share/icons/hicolor/256x256/apps/unexus-shell.png"
