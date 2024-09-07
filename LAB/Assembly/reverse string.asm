
.model small
.stack 100h

.data  

str db 'abc AHE BoU h $'
cnt db ?
  
.code

main proc
    mov ax,@data
    mov ds,ax
    
    lea si,str 
    mov cx,si
    
    traverse:
    cmp [si],36
    je ses
    push [si]
    inc si 
    jmp traverse
    
    
    ses:
    cmp cx,si
    je done
    pop dx
    mov ah,2
    int 21h 
    dec si
    jmp ses
    
    
     
    done:
    
    main endp
end main










