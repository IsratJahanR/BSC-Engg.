#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int count=0;
    //long long a=atoi(s.c_str());
    //cout<<a<<endl;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='4'||s[i]=='7')count++;
    }
    if(count==4||count==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
