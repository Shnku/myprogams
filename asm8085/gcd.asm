lda 2000h
  mov b,a
  lda 2001h

calc: ;if(a>b) => a<-max(a)-min(b)
  cmp b
  jc less
  sub b
  cmp b
  jz equal
  jmp calc

less: ;swap numbers (a<b)
  mov c,a
  mov a,b
  mov b,c
  jmp calc  

equal: ;when a==b
  mov a,b
  sta 2003h
  hlt
