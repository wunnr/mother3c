    .section .rodata

    .global gLevelStatTable
gLevelStatTable:
    .incbin "baserom.gba", 0x000CC4E8, 0x4

    .global gLevelStatTable2
gLevelStatTable2:
    .incbin "baserom.gba", 0x000CC4EC, 0x143C