SPDIR	START	0
FIRST	LDA	#5
	STA	ALPHA
	LDCH	#90
	STCH	C1

ALPHA	RESW	1
C1	RESB	1
	END	FIRST
