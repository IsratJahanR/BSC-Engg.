

.model small
.stack 100h
.data

a db 'Enter First Number  : $'
b db 'Enter Second Number : $'
c db 'Result =  $'

.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,a
    int 21h 
    
    
    mov ah,1
    int 21h
    mov bl,al
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    
    
    mov ah,9
    lea dx,b
    int 21h
    
    mov ah,1
    int 21h
    mov bh,al
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    
    mov ah,9
    lea dx,c
    int 21h
     
    add bh,bl 
    sub bh,48
    mov dl,bh
    
    mov ah,2
    int 21h
    
    
    ;mov ah,2
    ;mov dl,10
    ;int 21h
    ;mov dl,13
    ;int 21h
    
    
    
    main endp
end main







