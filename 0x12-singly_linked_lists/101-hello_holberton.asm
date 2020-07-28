.section .data

	msg db "Hello, Holberton\n"

longsaludo
	.quead .-saludo

.section .text
	.global main

main:
	mov $1, %rax
	mov $1, %rdi
	mov $saludo, %rsi
	mov longsaludo, %rdx
	syscall

	mov $60, %rax
	mov $0, %rdi
	syscall
