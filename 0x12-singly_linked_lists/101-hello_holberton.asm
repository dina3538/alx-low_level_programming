section		.text
	extern	printf
	global	main
main:
	mov		edi, requ
	mov		eax, 0
	call	printf

section		.data
	requ db 'Hello, Holberton', 0xa, 0
