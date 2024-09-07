#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>mystack;
    int s=mystack.size();
    cout<<s<<endl;
    mystack.push(1);
    mystack.push(3);
    s=mystack.size();
    cout<<s<<endl;
    for(int i=0;i<s;i++)cout<<mystack[i]<<" ";
    cout<<endl;
}
