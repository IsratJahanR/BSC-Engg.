

.model small
.stack 100h
.data

a db 'Input Three numbers : $'
b db 10,13,'Largest Number : $'


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
    int 21h
    mov bh,al
    int 21h
    mov cl,al
    
    ;print b:
    mov ah,9
    lea dx,b
    int 21h
    
    cmp bl,bh
    jge l1 
    
    
    l2:
    cmp bh,cl
    jge l3
    ;cl is greater
    mov ah,2
    mov dl,cl
    int 21h
    jmp exit
    
    l3: 
    ;bh is greater
    mov ah,2
    mov dl,bh
    int 21h 
    jmp exit
    
    l1:
    cmp bl,cl
    jge l4
    ;cl is greater
    mov ah,2
    mov dl,cl
    int 21h
    jmp exit
    
    l4:
    ;bl is greater
    mov ah,2
    mov dl,bl
    int 21h 
    jmp exit
    
    
    
    
            
    exit:
    mov ah,4ch
    int 21h
    
    
    
    main endp
end main

















