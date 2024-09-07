.model small
.stack 100h

.data 
 
str db 'abc AHE BoU h $'

.code

main proc
    
    mov ax,@data
    mov ds,ax
    
    
    lea si,str 
   compare:
    cmp [si],'$'
    je done
    
    cmp [si],'a'
    je yes
    cmp [si],'e'
    je yes
    cmp [si],'i'
    je yes
    cmp [si],'o'
    je yes
    cmp [si],'u'
    je yes
    cmp [si],'A'
    je yes
    cmp [si],'E'
    je yes
    cmp [si],'I'
    je yes
    cmp [si],'O'
    je yes
    cmp [si],'U'
    je yes
    
    inc si
    jmp compare 
    
    yes: 
    mov dl,[si]
    mov ah,2
    int 21h
    inc si
    cmp [si],'$'
    je done
    
    jmp compare
    
    
    done:
    
    
    main endp

end main


ret





