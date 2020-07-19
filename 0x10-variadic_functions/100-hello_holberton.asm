section .text
	global main		;must be declared for linker (gcc)
main:				;tell linker entry point
	mov rax, 1		;system call for write
	mov rdi, 1 		;file handle 1 is stdout
	mov rsi, msg		;address of string to output
	mov rdx, 17 		;number of bytes
	syscall 		;invoke operating system to do the write
	mov rax, 60 		;system call for exit
	mov rdi, 0	; exit code 0
	syscall

section .data 			;The data section is used for declaring initialized data or constants.

	msg db  'Hello, Holberton',0xa ;our dear string
	len equ 10		       ;length of our dear string
