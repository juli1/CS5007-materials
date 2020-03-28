section .data
    msg1:    db "comparison successful\n"
    msg2:    db "comparison not successful\n"

section .text

    global _start

_start:
    mov rax, 10
    mov rbx, 10
    add rax, rbx ; rax = rax + rbx
    cmp rax, 20
    je .ifbranch
    jmp .elsebranch

.ifbranch:
    mov     rax, 1
    mov     rdi, 1
    mov     rsi, msg1
    mov     rdx, 21
    syscall
    jmp .exit

.elsebranch:
    mov     rax, 1
    mov     rdi, 1
    mov     rsi, msg2
    mov     rdx, 25 
    syscall
    jmp .exit

.exit:
    mov    rax, 60
    mov    rdi, 0
    syscall

