# ZMK Config - Corne Keyboard

Personal [ZMK](https://zmk.dev/) firmware configuration for a [Corne (CRKBD)](https://github.com/foostan/crkbd) split keyboard with [nice!nano v2](https://nicekeyboards.com/nice-nano/) controllers.

## Layers

#### Details of Key Codes

[List of Keycodes](https://zmk.dev/docs/keymaps/list-of-keycodes)

### Layer 0 - Default (QWERTY)

```
|  TAB |  Q  |  W  |  E  |  R  |  T  |   |  Y  |  U  |  I  |  O  |  P  | BKSP |
| CTRL |  A  |  S  |  D  |  F  |  G  |   |  H  |  J  |  K  |  L  |  ;  |  '   |
| SHFT |  Z  |  X  |  C  |  V  |  B  |   |  N  |  M  |  ,  |  .  |  /  | ESC  |
                   | GUI | LWR | SPC |   | ENT | RSE | ALT |
```

### Layer 1 - Lower (Numbers / Navigation)

```
|  TAB |  1  |  2  |  3  |  4  |  5  |   |  6  |  7  |  8  |  9  |  0  | BKSP |
|BT CLR| BT1 | BT2 | BT3 | BT4 | BT5 |   |  <  |  v  |  ^  |  >  |     |      |
| SHFT | OUT | BL  | RGB |     | L3  |   |     |     |     |     |     |      |
                   | GUI |     | SPC |   | ENT |     | ALT |
```

### Layer 2 - Raise (Symbols)

```
|  TAB |  !  |  @  |  #  |  $  |  %  |   |  ^  |  &  |  *  |  (  |  )  | BKSP |
| CTRL |  ?  |     |  "  |  ;  |  :  |   |  =  |  -  |  [  |  ]  |  \  |  `   |
| SHFT |     |     |  '  |  <  |  >  |   |  _  |  +  |  {  |  }  |  |  |  ~   |
                   | GUI |     | SPC |   | ENT |     | ALT |
```

### Layer 3 - Function (F-keys / Media)

```
|  F1  |  F2 |  F3 |  F4 |  F5 |  F6 |   |  F7 |  F8 |  F9 | F10 | F11 | F12  |
|      |     |     |     |     |     |   | PSCRN|     | BRI+| MUTE| VOL-| VOL+ |
|      |     |     |     |     |     |   |     |     | BRI-| PREV| PLAY| NEXT |
                   |     |     |     |   |     |     |     |
```

## Features

- RGB underglow enabled
- Bluetooth with 5 profiles
- Output toggle (USB/BLE)
- Media and brightness controls on function layer

## Build

Firmware is built automatically via GitHub Actions on every push. Download the artifacts from the [Actions tab](../../actions).

To build locally, see the [ZMK documentation](https://zmk.dev/docs/development/setup).
