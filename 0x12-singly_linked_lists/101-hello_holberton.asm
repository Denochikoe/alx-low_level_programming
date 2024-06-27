section .data
	msg db "Hello, Holberton", 10, 0	; The string to be printed, null-terminated

section .text
	global main	; Entry point for the program

extern printf		;Declare printf as external


main:
	; Set up the stack frame
	push rbp
	mov rbp, rsp


	;Prepare the argument for printf
	mov rdi, msg	;First argument: address of the string
	xor rax, rax	;Clear rax, used for variadic function


	;Call printf
	call printf

	; Clean up the stack frame and return
	mov rsp, rbp
	pop rbp
	ret
