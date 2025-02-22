    lda 0055h
    cpi 00h
    jz zero_one
    mov b,a
    mov e,a
    dcr a
    cpi 01h
    jz store
    cpi 00h
    jz store
    mov c,a
loop:
    mov d,c
    mvi a,00h
mul:
    add e
    dcr d
    jnz mul
    mov e,a
    dcr c
    mov a,c
    cpi 01h
    jnz loop
store:
    mov a,e
    sta 0057h
    hlt
zero_one:
    mvi a,01h
    sta 0057h
    hlt
