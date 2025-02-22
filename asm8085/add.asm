
;<Program title>

jmp start

;data

;code
start:  nop
	lda 0001h
	mov b,a
	lda 0002h
	add b
	sta 0003h

	hlt