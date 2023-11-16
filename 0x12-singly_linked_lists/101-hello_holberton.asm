section .data
    hello db 'Hello, Holberton',0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, hello    ; format string
    mov rax, 0        ; syscall number for sys_write
    call printf

    ; Exit the program
    mov rax, 60       ; syscall number for sys_exit
    xor rdi, rdi      ; status 0
    syscall

section .text
global printf
extern putchar

printf:
    ; printf(char* format, ...)
    ; rdi: format string, ... (variadic arguments in registers)
    ; Uses syscall number 1 for sys_write to stdout

    xor rax, rax         ; Clear RAX register
.loop:
    ; Load the current character from the format string
    mov al, byte [rdi]

    ; Check if we've reached the null terminator (end of the string)
    cmp al, 0
    je .done

    ; Print the character
    mov rdi, 1            ; File descriptor 1 is stdout
    mov rsi, rsp          ; Load the address of the character into RSI
    mov rdx, 1            ; Print one character
    call putchar

    ; Move to the next character in the format string
    inc rdi

    ; Continue the loop
    jmp .loop

.done:
    ret

