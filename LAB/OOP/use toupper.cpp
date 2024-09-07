#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any charecter:";
    cin>>ch;
    ch=toupper(ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        cout<<"vowel";
    else
        cout<<"consonant";
    getch();
    return 0;
}
