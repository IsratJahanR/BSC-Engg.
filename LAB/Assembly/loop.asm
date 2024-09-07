


org 100h

; add your code here 
.model small
.stack 100h  
.data 

a db 'loop concept $'

.code

main proc
       
       mov ax,@data 
       mov ds,ax
       
       mov ah,9
       lea dx,a
       int 21h
       
       mov ah,2
       mov dl,10
       int 21h
       mov dl,13
       int 21h
       
       mov cx,26
       mov ah,2
       mov dl,'A'
       
       lvl:
       int 21h
       inc dl
       loop lvl
       
    
    main endp


END main






