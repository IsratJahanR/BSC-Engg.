#include<iostream>
using namespace std;
bool sqrtt(long long n)
{
    long long i;
    for(i=1;i*i<=n;i++)
    {
    if((n%i==0)&&(n/i==i)) return true;
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        if(sqrtt(x))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
