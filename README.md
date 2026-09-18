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

### Layer 3 - Function (F-keys / Media / Power)

```
|  F1  |  F2 |  F3 |  F4 |  F5 |  F6 |   |  F7 |  F8 |  F9 | F10 | F11 | F12  |
| EXTPW|     |     |     |     |     |   | PSCRN|     | BRI+| MUTE| VOL-| VOL+ |
| SOFF |     |     |     |     |     |   |     |     | BRI-| PREV| PLAY| NEXT |
                   |     |     |     |   |     |     |     |
```

- `EXTPW` — toggle external power (VCC to the LED strip). Persists across restarts.
- `SOFF` — **hold 2 seconds** to power the keyboard off. See below.

## Features

- RGB underglow (off by default, toggle with `RGB` on layer 1)
- Bluetooth with 5 profiles
- Output toggle (USB/BLE)
- Media and brightness controls on function layer
- Full power management: idle, deep sleep and soft off

## Power management

Three states, configured in [`config/corne.conf`](config/corne.conf).
See the [ZMK power docs](https://zmk.dev/docs/config/power).

| State | Trigger | Bluetooth | Wake by |
|---|---|---|---|
| **Idle** | automatic after 20s | stays connected | any keypress (instant) |
| **Deep sleep** | automatic after 5min idle | disconnected | any keypress (~1s reconnect) |
| **Soft off** | hold `SOFF` on layer 3 for 2s | off | **RESET button on both halves** |

Idle and deep sleep are automatic and need no interaction — they are where
essentially all of the day-to-day battery savings come from.

### Soft off

Soft off is a virtual power switch: consumption drops to near zero, which is
what you want before putting the keyboard in a bag for a while.

> **The stock CRKBD has no dedicated power button.** This config deliberately
> does *not* repurpose a matrix key as a wake key, so the only way back on is
> the physical RESET button on the nice!nano — **on both halves**. That keeps an
> accidental power-on impossible, at the cost of needing to reach the reset
> button.
>
> To use a key as a power button instead, you need extra devicetree nodes
> (`zmk,gpio-key-wakeup-trigger` and `zmk,soft-off-wakeup-sources`) in a shield
> overlay — see the
> [soft off setup guide](https://zmk.dev/docs/hardware-integration/soft-off-setup).

### Battery notes

- The RGB underglow is the dominant drain. It now starts **off**, switches off
  when idle, and switches off whenever USB is disconnected.
- Bluetooth connection intervals are tuned for battery over latency
  (15-30ms intervals, latency 4) — not noticeable while typing.

## Build

Firmware is built automatically via GitHub Actions on every push. Download the artifacts from the [Actions tab](../../actions).

To build locally, see the [ZMK documentation](https://zmk.dev/docs/development/setup).
