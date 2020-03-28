section .data
    msg:    db "has arguments"

section .text

    global _start

_start:
    pop rcx

	 cmp rcx, 1
	 jg .has_arguments
    jmp .exit

.has_arguments:
    mov     rax, 1
    mov     rdi, 1
    mov     rsi, msg
    mov     rdx, 14
    syscall
    jmp .exit


.exit:
    mov    rax, 60
    mov    rdi, 0
    syscall

