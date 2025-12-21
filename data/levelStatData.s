    .section .rodata

    .global gLevelStatTable
gLevelStatTable:
    .incbin "baserom.gba", 0x000CC4E8, 0x1440
    