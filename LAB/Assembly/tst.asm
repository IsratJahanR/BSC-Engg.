.model small
.stack 100h
.data

x db 3
y db ?

.code

proc main
    mov ax, @data
    mov ds,ax 
    
    mov ah,2 
    add x,3
    mov dl,x 
    int 21h 
    
    
    
    mov ah,1
    int 21h
    mov y,al
    
    mov ah,2
    mov dl,10 
    int 21h
    mov dl,13
    int 21h
    
    mov ah,2
    mov dl,y
    int 21h
    
    exit:
    mov ah,4
    int 21h
    main endp
    
end main