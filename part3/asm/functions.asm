
section .text

	global myfunction

myfunction:
	mov r8, rdi
	mov r9, rsi
	add r9, r8
	mov rax, r9
	ret
