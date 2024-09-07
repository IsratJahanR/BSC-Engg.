
ORG 100h  

.MODEL SMALL 
.DATA     

a dw ?
b dw ? 

.CODE

main proc
    mov ax,@data
    mov ds, ax 
    
mov ax,1234h
mov bx,5678h
mov cx,9ABCh
mov sp,100h

push ax
push bx
XCHG ax,cx
pop ax
push ax
pop bx

           

main endp 

end main
