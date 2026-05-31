# PED OS Architecture

This document describes the technical architecture of PED OS.

---

## Overview

PED OS is a Linux-based desktop operating system built for gamers.
It runs on top of Wayland, uses a customized Hyprland compositor,
and a Qt/QML interface layer — all tuned for gaming performance.

---

## Layer Stack

┌─────────────────────────────────────┐
│         Games & Gaming Apps         │
│   (Steam, Lutris, Proton, Wine)     │
├─────────────────────────────────────┤
│         PED Shell Components        │
│  (Dock, Launcher, Settings, Store)  │
├─────────────────────────────────────┤
│         Qt / QML Interface          │
├─────────────────────────────────────┤
│      Hyprland Compositor (fork)     │
├─────────────────────────────────────┤
│         Wayland Display Server      │
├─────────────────────────────────────┤
│       Vulkan / OpenGL Rendering     │
├─────────────────────────────────────┤
│     Linux Kernel (gaming tuned)     │
└─────────────────────────────────────┘
---

## Gaming Architecture

### Game Mode
When a game launches, PED OS automatically:
- Switches CPU governor to `performance`
- Disables unnecessary background services
- Prioritizes GPU resources
- Reduces compositor overhead

### GPU Stack
- Vulkan as primary rendering API
- OpenGL fallback for older titles
- NVIDIA, AMD and Intel support
- Driver manager built into PED Settings

### Compatibility Layer
- Proton/Wine integration for Windows games
- Per-game profiles stored locally
- Steam and Lutris supported out of the box

---

## Components

### ped-shell
Main desktop interface. Manages the overall layout, wallpaper, top bar,
dock and coordinates all other components.

**Current implementation:**
- Top bar with live clock, date, network and battery
- Minimalist floating dock
- Dock hover zoom effect
- Dock tooltip on hover
- Dock bounce animation on click
- Entrance animations on startup
- Login screen with avatar
- PED Launcher with search and categories
- Right-click context menu
- Notification system

### ped-dock
Minimalist application dock. Currently embedded in ped-shell,
will be extracted as a standalone component.

### ped-launcher
Universal search and app launcher. Will include game library search.

### ped-settings
System control panel. Will include GPU driver manager,
game mode toggle, controller setup and performance profiles.

### ped-store
Application store focused on gaming tools, emulators and utilities.

### ped-files
File manager. Clean, fast and keyboard-friendly.

---

## Communication

Components communicate via:
- **D-Bus** — system-level signals and inter-process communication
- **Wayland protocols** — compositor and window management
- **Qt signals/slots** — internal component communication

---

## Languages

| Layer | Language |
|---|---|
| Core system | Rust |
| Compositor integration | C++ |
| Interface | QML |
| Scripts & tooling | Bash, Python |

---

## Future: PEDWM

The long-term goal is to replace the Hyprland fork with **PEDWM**,
a compositor written from scratch tailored for PED OS,
with gaming-specific optimizations and full control over the rendering pipeline.

---

<sub>Architecture is a living document — it evolves as PED OS grows.</sub>
