#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x[5],s1=0,s2=0;
    for(int i=0;i<5;i++)cin>>x[i];
    sort(x,x+5);
    for(int i=0;i<4;i++)
    {
        s1+=x[i];
        s2+=x[i+1];

    }
    cout<<s1<<" "<<s2<<endl;
}
