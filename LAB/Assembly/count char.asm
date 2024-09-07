.model small
.stack 100h

.data   

str db 'programming$'
cnt db ?

.code

main proc 
    mov ax,@data
    mov ds,ax
    
    lea si,str
    mov cl,0
    
    compare:
    cmp [si],36
    je ses
    inc cl
    inc si
    jmp compare
    
    
    
    ses:
    
    mov dl,cl  
    mov cnt,cl
    ;sub dl,48
    mov ah,2
    int 21h
    
    main endp
end main

ret



