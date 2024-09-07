#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int c=0;
    string str;
    getline(cin,str);
    stringstream sa(str);
    string s;
    while(sa>>s) c++;
        cout<<c<<endl;
}
