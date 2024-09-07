org 100h
.data 

num db 05h
ans db ?

fact Macro num 
  
  mov bl,num
  dec bl 
  mov cl,bl
  
  lvl:
  mul bl
  dec bl
  loop lvl 
  
  mov dl,al
  mov ah,2
  int 21h
  
  
ENDM

.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov al,4h
    fact al
    
    mov ans,dl 
    
    ;mov ans,al
    exit:
    mov ah,4ch
    int 21h 
    
    
    
    end main
        
ret




