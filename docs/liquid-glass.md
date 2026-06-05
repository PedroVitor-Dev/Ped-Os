# Liquid Glass

Liquid Glass is the intended visual signature of uNexus.

The first implementation is a QML material layer, not a full compositor. It creates the shared language for translucent depth, edge highlights, light streaks, grain and theme-reactive tinting across docks, menus and notifications.

Source:

```text
packages/unexus-shell/qml/LiquidGlass.qml
```

## Current Layer

`LiquidGlass.qml` provides:

- translucent tinted material;
- depth shadow;
- accent-reactive refraction streaks;
- subtle grain;
- inner highlight;
- border and edge glint;
- content slot for normal QML children.

Applied surfaces:

- side docks;
- desktop context menu;
- dock action menu;
- notifications.

## Future Compositor Direction

The long-term target is not generic CSS-style glassmorphism. The goal is a compositor-aware material that reacts to the scene under it:

- real wallpaper/panel sampling;
- background blur;
- mild refraction;
- light response from accent/theme and wallpaper;
- depth layering for Mission Control-like surfaces;
- eventual compositor bridge beyond Hyprland-only behavior.

Near-term work should keep using `LiquidGlass` as the visual API. When shader or compositor integration lands, panels should not need to be rewritten.

