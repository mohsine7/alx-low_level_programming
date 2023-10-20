section .data
    hello_fmt db "Hello, Holberton", 10, 0 ; Format string for printf

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello_fmt
    call printf
    add rsp, 8  ; Clean up the stack (8 bytes for one argument)

    pop rbp
    xor rax, rax
    ret
