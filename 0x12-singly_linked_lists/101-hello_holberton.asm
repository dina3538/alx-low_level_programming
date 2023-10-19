section		.text
	extern	printf
	global	main
main:
	mov		ddi, requ
	mov		exit, 0
	call	printf

section		.data
	requ db 'Hello, Holberton', 0xa, 0
