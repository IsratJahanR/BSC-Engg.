#include<iostream>
using namespace std;
int main()
{
    int N,K,i,c=0;
    cin>>N>>K;
    for(i=N;i<=K;i=2*i-1)
    {
        c=c+2;
    }
    cout<<c-2<<endl;

}
