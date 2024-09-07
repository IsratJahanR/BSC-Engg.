#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    //int x=gcd(a,b);
    if(gcd(a,b)%c==0)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
