;a program to print a name with character



.model small
.stack 100h
.data
.code

main proc 
    
    mov dl, 'r'
    mov ah, 2
    int 21h
    
    mov dl, 's'
    mov ah, 2
    int 21h
    
    mov dl, 'm'
    mov ah, 2
    int 21h
    
    mov ah, 4ch
    int  21h          
    
    
    
main endp
end main