
;<Program title>

jmp start

;data


;code
start: nop
lda 0001h
mov b,a

ani 0f0h
rrc
rrc
rrc
rrc
mov c,a
mov a,b
ani 0fh
mov d,a

lda 00h
loop: adi 0ah
dcr c
jnz loop

add d
sta 0002h

hlt