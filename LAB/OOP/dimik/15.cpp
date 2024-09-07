//              ISRAT JAHAN RESHMA
//              dept. of CSE(SHIICT),BSMRSTU
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int i=0,count[26]={0},x;
    string s;
    char ch=' ';
    int t;
    cin>>t;
    while(t--){
    //getline(cin,s);
    cin>>s;
    //sort(s.begin(),s.end());
    //cout<<s<<endl;
    while(s[i]!='\0')
    {
       // if(s[i]>='a'&&s[i]<='z')
        //{
           x=s[i]-'a';
           count[x]++;
        //}
        i++;
    }
    for(i=0;i<26;i++)
    {
        ch=i+'a';
        if(count[i]>0)cout<<ch<<" = "<<count[i]<<endl;}
        cout<<endl;
    }
    return 0;

}
