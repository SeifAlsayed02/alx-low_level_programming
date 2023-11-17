; File: 101-hello_holberton.asm
; Auth: Seif Elsayed
;

extern printf

section .data
   msg: db "Hello, Holberton", 0
   fmt: db "%s", 10, 0
main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   mov rax,0
   call printf

   pop rbp

   mov rax,0
   ret
