#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    map<string,int>FW;
    stringstream ss(str);
    string s;
    while(ss>>s)FW[s]++;
    map<string,int>::iterator m;
    for(m=FW.begin();m!=FW.end();m++)
    {
        cout<<m->first<<" -> "<<m->second<<"\n";
    }


}
