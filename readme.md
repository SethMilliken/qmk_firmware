# Quantum Mechanical Keyboard Firmware

[![Current Version](https://img.shields.io/github/tag/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/tags)
[![Discord](https://img.shields.io/discord/440868230475677696.svg)](https://discord.gg/qmk)
[![Docs Status](https://img.shields.io/badge/docs-ready-orange.svg)](https://docs.qmk.fm)
[![GitHub contributors](https://img.shields.io/github/contributors/qmk/qmk_firmware.svg)](https://github.com/qmk/qmk_firmware/pulse/monthly)
[![GitHub forks](https://img.shields.io/github/forks/qmk/qmk_firmware.svg?style=social&label=Fork)](https://github.com/qmk/qmk_firmware/)

This is a keyboard firmware based on the [tmk\_keyboard firmware](https://github.com/tmk/tmk_keyboard) with some useful features for Atmel AVR and ARM controllers, and more specifically, the [OLKB product line](https://olkb.com), the [ErgoDox EZ](https://ergodox-ez.com) keyboard, and the Clueboard product line.

## Documentation

* [See the official documentation on docs.qmk.fm](https://docs.qmk.fm)

The docs are powered by [VitePress](https://vitepress.dev/). They are also viewable offline; see [Previewing the Documentation](https://docs.qmk.fm/#/contributing?id=previewing-the-documentation) for more details.

You can request changes by making a fork and opening a [pull request](https://github.com/qmk/qmk_firmware/pulls).

## Supported Keyboards

* [Planck](/keyboards/planck/)
* [Preonic](/keyboards/preonic/)
* [ErgoDox EZ](/keyboards/ergodox_ez/)
* [Clueboard](/keyboards/clueboard/)
* [Cluepad](/keyboards/clueboard/17/)
* [Atreus](/keyboards/atreus/)

The project also includes community support for [lots of other keyboards](/keyboards/).

## Maintainers

QMK is developed and maintained by Jack Humbert of OLKB with contributions from the community, and of course, [Hasu](https://github.com/tmk). The OLKB product firmwares are maintained by [Jack Humbert](https://github.com/jackhumbert), the Ergodox EZ by [ZSA Technology Labs](https://github.com/zsa), the Clueboard by [Zach White](https://github.com/skullydazed), and the Atreus by [Phil Hagelberg](https://github.com/technomancy).

## Official Website

[qmk.fm](https://qmk.fm) is the official website of QMK, where you can find links to this page, the documentation, and the keyboards supported by QMK.

## SethMilliken

Build with `qmk-build <target>`

### WIP

To use userspace:

```
qmk config user.overlay_dir=/Users/seth.milliken/sandbox/code/qmk_userspace
```

* Figure out why adding keymaps to userspace is not working.
* Figure out why builds using userspace are not working.

### Missing ZMK Features

* [x] 4.17: new function layer
* [x] 3.81: refine vimmux layer
* [x] 3.80: add new vimmux layer
* [x] 3.78: add `&zoom_tog` to adjust layer
* [x] 3.77: swap tmux pane and window nav bindings
* [x] 3.76: tmux vim paste
* [x] 3.75: tmux macro adjustments
* [x] 3.70: layer upheaval
* [ ] 3.57: swap `win_next` position on window layers
* [ ] 3.62: lhs return and space
* [ ] 3.60: gaming layout
* [ ] 3.52: remove `iI` tap dance
* [ ] 3.50: remove `;` and `/` tap dances
* [ ] 3.49: standardize on combo timeouts
* [x] 3.47: add osl macro for act and func one-shot layers
* [x] 3.46: numpad adjustments
* [x] 3.45: add new function layer with combo
* [x] 3.44: replace inverse_win combos with additional act layer one shots
* [ ] 3.43: switch to using shift sk for win move alternate modes
* [x] 3.42: more symmetrical pointer layer
* [x] 3.41: add distinct one-shot act layer with combo
* [ ] 3.39: adjusted mouse keys configuration values
* [ ] 3.35: adjusted combo timings
* [ ] 3.33: distinct tmux layer
* [x] 3.32: mirrored backspace combo on right
* [ ] 3.31: lower version combo timing
* [ ] 3.30: distinct home row mods shift timings
* [x] 3.19: backspace combo
* [x] 3.16: left side esc on discord layer
* [x] 3.15: toggles for pointer and discord layers
* [ ] 3.13: `&capsy` with `&caps_lock`
* [x] 3.10: mirrored lnum numpad
