    .section .rodata

    .global gGBPlayerLogoGfx
gGBPlayerLogoGfx:
    .incbin "baserom.gba", 0x000C7FE8, 0x4000

    .global gGBPlayerLogoLayout
gGBPlayerLogoLayout:
    .incbin "baserom.gba", 0x000CBFE8, 0x500
