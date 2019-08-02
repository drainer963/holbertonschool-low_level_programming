global main
	section .text

main:
	  mov rax, 1        	; write(
	  mov rdi, 1        	;   STDOUT_FILENO,
	  mov rsi, msg      	;   "Hello, world!\n",
	  mov rdx, msglen   	;   sizeof("Hello, world!\n")
	  syscall           	; );

	  mov rax, 60       	; exit(
	  mov rdi, 0        	;   EXIT_SUCCESS
	  syscall           	; );

	section .data
msg:		 db "Hello, Holberton", 13, 10,
msglen:		 equ $ - msg
