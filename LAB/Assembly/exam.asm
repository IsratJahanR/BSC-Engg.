
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 
.model small
.stack 100h
.data
.code

    main proc
    
     
     
     mov dl,5H
     mov ah, 2
     INT 21h
    
    main endp
    
    
end main  
RET




