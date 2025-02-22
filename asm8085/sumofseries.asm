lda 2000h ;5
  mov b,a
do:
  dcr b ;4->3->2->1
  add b ;(((5+4)+3)+2)+1
  mov c,a ;copy 
  
  mov a,b ;check counter
  cpi 00h ;b==0
  jz toend

  mov a,c ;copy back
  jmp do

toend:
  mov a,c
  sta 2003h
  hlt
