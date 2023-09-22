section .text
	extern printf
	global main

main:
	mov edi, quote
	mov eax, 0
	call printf

section .data
	quote db 'Hello, Holberton', 0xa, 0
