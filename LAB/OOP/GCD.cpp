#include<iostream>
using namespace std;
int main()
{
    int a,b,c,gcd,p=0,i;
    cin>>a;
    cin>>b;
    cin>>c;
    for(i=2;i<a+b+c;i++)
    {
        if(a%i==0&&b%i==0&&c%i==0)
        {
            gcd=i;
            p=1;
        }
    }
    if(p==0)
        cout<<"1"<<endl;
    else
        cout<<gcd<<endl;
        return 0;
}
