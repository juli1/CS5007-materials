
section .text

	global myfunction
	global myswap

myfunction:
	mov r8, rdi
	mov r9, rsi
	add r9, r8
	mov rax, r9
	ret

myswap:
	mov r8, [rdi]
	mov r9, [rsi]
	mov [rdi], r9
	mov [rsi], r8
   ret
