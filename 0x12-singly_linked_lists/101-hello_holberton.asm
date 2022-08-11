extern printf
section .data		;Data section
	msg: db "Hello, Holberton", 0
	fmt: db "%s", 10, 0
section .text		;Program section
	global main
main:
	push rbp	;Push to stack
	mov rdi,fmt
	mov rsi,msg
	mov rax,0
	call printf	;Calls printf function
	pop rbp
	mov rax,0
	ret		;Return
