
.model small

.stack 100h 

.data 

m db 'I love Bangladesh $'
main proc
    mov ax,@data
    mov ds,ax
     
    mov ah,1
    int 21h 
    mov bl,al
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,1
    int 21h 
    mov bh,al
              
    mov ah,2
    mov dl,bl
    int 21h
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
    
    mov ah,2
    mov dl,bh
    int 21h
    
    
    mov ah,2
    mov dl,07
    int 21h
    
    main endp

end main
              
       



