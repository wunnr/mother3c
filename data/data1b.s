    .section .rodata

    .global gUnknown_080E1708
gUnknown_080E1708:
    .incbin "baserom.gba", 0x000E1708, 0x200

    .global gPsiData
gPsiData:
    .incbin "baserom.gba", 0x000E1908, 0x4

    .global gUnknown_080E190C
gUnknown_080E190C:
    .incbin "baserom.gba", 0x000E190C, 0x4

    .global gUnknown_080E1910
gUnknown_080E1910:
    .incbin "baserom.gba", 0x000E1910, 0x8

    .global gUnknown_080E1918
gUnknown_080E1918:
    .incbin "baserom.gba", 0x000E1918, 0x37F0

    .global gGoodsInfo
gGoodsInfo:
    .incbin "baserom.gba", 0x000E5108, 0x4

    .global gUnknown_080E510C
gUnknown_080E510C:
    .incbin "baserom.gba", 0x000E510C, 0x3C

    .global gUnknown_080E5148
gUnknown_080E5148:
    .incbin "baserom.gba", 0x000E5148, 0x6BC0

    .global gShopData
gShopData:
    .incbin "baserom.gba", 0x000EBD08, 0x870
