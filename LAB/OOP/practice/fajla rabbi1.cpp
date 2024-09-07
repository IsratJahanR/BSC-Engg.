#include<bits/stdc++.h>
#include<time.h>
using namespace std;
#define ll long long
string s,ss,vis;
map<char,ll>mp;
int main()
{
    ll i,len,c=0,j,c1=0;
    getline(cin,s);
    len=s.size();
    ss="";
    for(i=0;i<len;i++)
    {
        if(s[i]>='A'&&s[i<='Z'])
                                {
                                    if(vis[s[i]]==0){
                                      vis[s[i]]=1;
                                      ss=ss+s[i];
                                    }
                                }
    }
    cout<<ss;
    ll len2=ss.size();
    for(i=0;i<len2;i++)
    {
        if(ss[i]=='A'||ss[i]=='E'||ss[i]=='I'||ss[i]=='O'||ss[i]=='U'||
           ss[i]=='a'||ss[i]=='e'||ss[i]=='i'||ss[i]=='o'||ss[i]=='u')c++;
        else c1++;
    }
    cout<<c<<" "<<c1<<endl;
}
