#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long x[n];
    for(int i=0;i<n;i++)cin>>x[i];
    sort(x,x+n);
    long long sum=x[n-1],c=1;
    for(int i=n-2;i>=0;i--)
    {
       if(x[i]==sum)c++;
    }
    cout<<c<<endl;
}
