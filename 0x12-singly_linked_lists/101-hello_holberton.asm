section .data
    format db "Hello, Holberton",10,0  ; The format string for printf

section .text
    global main
    extern printf

main:
    ; Push the address of the format string onto the stack
    lea rdi, [format]
    call printf

    ; Exit the program
    mov rax, 60       ; syscall number for exit (60)
    xor rdi, rdi      ; status = 0
    syscall
