# ENCODER_ENABLE = yes

# RGBLIGHT_ENABLE = yes
# WS2812_DRIVER = vendor

QUANTUM_PAINTER_ENABLE = yes
QUANTUM_PAINTER_ST7789_SPI_ENABLE = yes
QUANTUM_PAINTER_DRIVERS += st7789_spi

CONSOLE_ENABLE= yes
COMMAND_ENABLE = yes

SRC += bkb_logo_mod.qgf.c

# Enable debug information in the final binaries
# DEBUG_ENABLE = yes
# Disable optimisations for debugging purposes
# LTO_ENABLE = no
# OPT = g


