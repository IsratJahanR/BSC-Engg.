

.model small
.stack 100h
.data 

a db 'this is in macro $'

display Macro msg
    mov ah,9
    lea dx,msg
    int 21h
ENDM

.code
main proc
    mov ax,@data
    mov ds,ax
    
    display a
            
    exit:
    mov ah,4ch
    int 21h
    
    
    
    main endp
end main






