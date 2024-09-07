;1.Print ?
;2.star print
;***********
;***********
;***********
;***********
;***********
;****CSE****
;***********
;***********
;***********
;***********
;***********
;3.Beep Sound

.model small
.stack 100h
.data

a db '***********',10,13,'$'
b db '****$'

.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,2
    mov dl,'?'
    int 21h
    
    ;input for CSE
    mov ah,1 ;for input
    int 21h
    mov bl,al
    int 21h
    mov bh,al
    int 21h
    mov dh,al
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h
     
    ;loop for print 5 times
    mov cx,5
    mov ah,9
    lea dx,a 
    l1:
    int 21h
    loop l1
    

    mov ah,9
    lea dx,b
    int 21h 
    
    mov ah,2
    mov dl,bl
    int 21h
    mov dl,bh
    int 21h
    mov dl,bl
    int 21h
    
    mov ah,9
    lea dx,b
    int 21h 
    
    mov ah,2
    mov dl,10
    int 21h
    mov dl,13
    int 21h  
    
    ;loop for print 5 times
    mov cx,5
    mov ah,9
    lea dx,a
    l2:
    int 21h
    loop l2
    
    mov ah,2
    mov dl,007
    int 21h
    
    
            
    exit:
    mov ah,4ch
    int 21h
    
    
    
    main endp
end main




