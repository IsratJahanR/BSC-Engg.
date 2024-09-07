#include<bits/stdc++.h>
using namespace std;
int main()
{
    char
    int i=0,c=0,t;
    cin>>t;
for(i=0;i<t;i++)    {
    string s;
    getline(cin,s);
    while(s[i]!='\0')
    {
        if(s[i]==' ')c++;
        i++;
    }
    cout<<c+1<<endl;
    }
}
