section .data
    format db "Hello, Holberton",10,0  ; The format string for printf
    hello db "Hello, Holberton",10,0   ; The string to print

section .text
    global main
    extern printf

main:
    ; Push the address of the format string onto the stack
    lea rdi, [format]
    mov rax, 0        ; Clear RAX to indicate a variable argument function
    call printf

    ; Exit the program
    mov rax, 60 
    xor rdi, rdi
    syscall
