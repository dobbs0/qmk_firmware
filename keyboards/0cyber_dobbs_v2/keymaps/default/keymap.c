// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "quantum.h"
#include "qp.h"
#include "qp_st7789.h"        // Add this line for your specific display
#include "color.h"            // Add this for COLOR constants
#include "bkb_logo_mod.qgf.h"
#include "print.h"

static painter_device_t       display;
static painter_image_handle_t my_image;

void keyboard_post_init_user(void) {

    debug_enable=true;
    debug_matrix=true;

    print("Initializing display!\n");
        
    display = qp_st7789_make_spi_device(DISPLAY_WIDTH, DISPLAY_HEIGHT, DISPLAY_CS_PIN, DISPLAY_DC_PIN, DISPLAY_RST_PIN, 4, 3);


    qp_init(display, QP_ROTATION_0);
    qp_clear(display);
    my_image = qp_load_image_mem(gfx_bkb_logo_mod);
    qp_drawimage(display, 0, 0, my_image);
    qp_flush(display);

}


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_MINUS,   KC_SLSH,   KC_KP_ASTERISK, KC_BACKSPACE,
        KC_7,   KC_8,   KC_9, KC_KP_PLUS,
        KC_4,   KC_5,   KC_6, KC_1,
        KC_2,   KC_3,   KC_0, KC_DOT,
        KC_ENTER
    )
};
