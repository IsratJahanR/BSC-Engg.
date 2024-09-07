#include<iostream>
using namespace std;
unsigned long long fact(int x)
{
    if(x==0)return 1;
    else return x*fact(x-1);
}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fact(n)<<endl;
    }
}
