    .section .rodata

    .global gUnitTargetData
gUnitTargetData:
    .incbin "baserom.gba", 0x000CF228, 0x500
