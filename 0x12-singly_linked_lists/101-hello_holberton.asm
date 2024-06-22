; Writes "Hello, Holberton" to the console using printf from the C
; the standard library. Runs on 64-bit Linux only.
; To assemble and run:
; nasm -f elf64 hello.asm 101-hello_holberton.asm && gcc -no-pie
; -std=gnu89 101-hello_holberton.o -o hello

section .data
	hello db 'Hello, Holberton' , 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rbp, rsp
	mov rdi, hello
	xor rax, rax
	call printf
	xor rax, rax
	pop rbp
	ret
