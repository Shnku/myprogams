START: nop
mvi,c 07
lxi h,0055h ;source: 0055h to 005bh
lxi d 0066h ;dest: 0060h to 0066h

LOOP: nop
mov a,m ;ac<-5500h(hl)
stax d  ;d=0066h<-ac
inx h 	;0055-0056-0057-0058... 0x0050 
dcx d 	;0066-0065-0064-0063.... 
der c 	;07-06-05..so on to 00 
jnz LOOP  

hlt
