 section .data
	fmt     db "%u  %s",10,0
	msg1    db "Hello, Holberton",13,10

	    section .text
	    extern printf
	    global _start

_start:
	    mov  edx, msg1
	    mov  esi, 1
	    mov  edi, fmt
	    mov  eax, 0     	; no f.p. args
	    call printf

	    mov  ebx, 0     	; return value
	    mov  eax, 1
	    int  0x80
