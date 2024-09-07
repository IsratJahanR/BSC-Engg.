#include<bits/stdc++.h>
using namespace std;
long D_to_B(int D)
{
    long B=0;
    int rem=1,tmp=1;
    while(D!=0)
    {
        rem=D%2;
        D=D/2;
        B=B+rem*tmp;
        tmp=tmp*10;
    }
    return B;
}
int main()
{

    int x;
   cin>>x;
   x=x;
   //long b=D_to_B(x);
   //cout<<b<<endl;
    int count=0;
    while(x!=0){
        x=(x&(x<<1));
        count++;
    }
    cout<<count<<endl;
}
