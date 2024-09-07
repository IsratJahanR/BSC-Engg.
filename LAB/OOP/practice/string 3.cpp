#include<bits/stdc++.h>
#include<cstring>
#define ll long long
using namespace std;
string s,ss,vis;
//map<char,ll>mp;
int main()
{
    ll i,len,len2;
    ss="";
    getline(cin,s);
    len=s.size();
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
    //cout<<ss<<endl;
    len2=ss.size();
    //cout<<len2;

}

