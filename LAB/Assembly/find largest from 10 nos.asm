
; You may customize this and other start-up templates; 
; The location of this template is c:\emu8086\inc\0_com_template.txt

org 100h 
.data
a db 10h,50h,40h,20h,80h,00h,00ffh,30h,60h,00feh
.code
mov ax,@data
mov ds,ax

lea si,a 
mov bh,00h

mov cx,10
l:
 
cmp bh,[si]
jnc skip
mov bh,[si]

skip: 
inc si
loop l

;mov ah,2
;mov dl,bh
;int 21h  

mov [si],bh
int 03h


; add your code here

ret




