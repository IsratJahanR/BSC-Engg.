
.model small
.stack 100h
.data

a db 'jump concept $'
b db 'Assembly language $'
c db 'programming $'

.code
main proc
    mov ax,@data
    mov ds,ax
    
    
    lea dx,a
    mov ah,9
    int 21h
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    m:
    mov ah,9
    lea dx,b
    int 21h
    jmp n
    
    n:
    mov ah,9
    lea dx,c
    int 21h
    
    main endp
end main



