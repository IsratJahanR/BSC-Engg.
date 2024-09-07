;Factorial of a Number

org 100h
.data 

str db 'abcdef$'
strt dw ?

.code


main proc
    
   mov ax,@data
   mov ds,ax
   
   lea si,str
   mov strt,si
   
   com:
   cmp [si], '$' 
   je D
   inc si
   jmp com
    
   D:
   dec si
   dec strt 
   
   print:
   cmp si,strt
   cmp [si],[strt]
   je done
   mov ah,2
   mov dl,[si]
   int 21h
   dec si
   jmp print
   
   
   done:
   
   
   
   
   exit:
   mov ah,4ch
   int 21h
  
    
    
    main endp
end main

ret


