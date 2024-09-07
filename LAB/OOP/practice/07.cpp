#include<iostream>
using namespace std;
int main()
{
    int N,i,X[10000],j;
    cin>>N;
    for(i=0;i<N;i++)
    {
        cin>>X[i];
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<X[i];j++)
        cout<<j;
        cout<<endl;
    }
}
