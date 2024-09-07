#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n1,n2;
    //s="07:05:45PM";
    getline(cin,s);
    int l=s.length();
        if(s[l-2]=='P' && s[0]=='1' && s[1]=='2') {for(int i=0;i<l-2;i++)cout<<s[i];}

    else if(s[l-2]=='P')
    {
        n1=s[0]-'0';
        n2=s[1]-'0';
        n1=n1*10+n2+12;
        cout<<n1;
        for(int i=2;i<l-2;i++)cout<<s[i];
        cout<<endl;
    }
    else if(s[l-2]=='A' && s[0]=='1' && s[1]=='2')
    {
     cout<<"00";
    for(int i=2;i<l-2;i++)cout<<s[i];
    }
    else {for(int i=0;i<l-2;i++)cout<<s[i];}
    return 0;

}
