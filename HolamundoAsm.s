/*    ;@@
    ;@@ Instituto Tecnologico de Tijuana
    ;@@ Depto de Sistemas y Computación
    ;@@ Ing. En Sistemas Computacionales
    ;@@   
    ;@@ Autor : Alonso Villegas Luis Antonio @nickname Luis-Alonso18
    ;@@ Repositorio: http://github.com/tectijuana/Problemas_cpp
    ;@@ Fecha de revisión: 20/10/2020
    ;@@ 
    ;@
    ;@ Objetivo del programa:
    ;@    Desplegar en la pantalla el mensaje de "Hello, world!"
    ;@
*/
    
    .text    
    .global _start

_start:    
    mov   r7,#4        @ write system call    
    mov   r0,#1        @ file (stdout)    
    ldr   r1,=message    
    mov   r2,#14       @ message length     
    svc   #0    
    mov   r7,#1        @ exit system call    
    mov   r0,#0        @ return code    
    svc   #0    
   .data

message:    
    .ascii "Hello, world!\n"
