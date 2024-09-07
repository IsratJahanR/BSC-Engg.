#include<stdio.h>
#define M 10 ///Stack_size
int myStack[M],top=-1;
void push(int value)
{
    if(top>=M-1) printf("Stack is full\n");
    myStack[++top]=value;
}
void peek()
{
    if(top<0)printf("stack underflow\n");
    else printf("%d\n",myStack[top]);
}
void pop()
{
    if(top<0)printf("Stack Underflow\n");
    else top--;
}
void display()
{
    for(int i=0;i<=top;i++)printf("%d ",myStack[i]);
    printf("\n");
}
int main()
{
    push(3);
    push(4);
    push(11);
    push(32);
    display();
    peek();
    pop(); ///remove the last element from the stack
    display();
}
