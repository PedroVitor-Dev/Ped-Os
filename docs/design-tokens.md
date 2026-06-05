# Design Tokens

uNexus uses QML design tokens as the first layer of the visual system.

The source of truth is:

```text
packages/unexus-shell/qml/DesignTokens.qml
```

`Main.qml` exposes compatibility aliases such as `root.spaceMd`, `root.radiusLg`, `root.motionBase`, `root.surfaceRaised` and `root.textPrimary`. Existing panels should continue using those root aliases so the whole shell can be tuned from one place.

## Token Groups

| Group | Purpose |
|---|---|
| `fontFamily` | Default UI font |
| `space` | Spacing scale |
| `layout` | Panel margins, breakpoints and multi-monitor offsets |
| `radius` | Border radius scale |
| `border` | Border widths and neutral border colors |
| `motion` | Animation timing scale |
| `type` | Font size scale |
| `surface` | Base, panel, raised and hover surfaces |
| `text` | Primary, secondary and muted text colors |
| `status` | Success, warning, danger, info and idle colors |
| `shadow` | Shared shadow colors |

## Rules

- Prefer `root` token aliases in QML panels.
- Add a new token only when at least two surfaces or components need it.
- Keep motion fast and functional; avoid decorative delays.
- Use semantic colors for state and status instead of hardcoded one-off colors.
- Theme-specific accent colors still live in `Main.qml` because they are selected at runtime.

