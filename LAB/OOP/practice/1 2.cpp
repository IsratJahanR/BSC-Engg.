#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int t,len,last_number;
    char ch[102],last_char;
    cin>>t;
for(int i=0;i<t;i++)
    {
     cin>>ch;
     len=strlen(ch);
     last_char=ch[len-1];
     last_number=last_char-'0';
     if(last_number%2==0)
        cout<<"even"<<endl;
     else
        cout<<"odd"<<endl;
    }

}
