#include<iostream>
using namespace std;
int main()
{
    int n,i,j,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cout<<"Case "<<i<<": ";
        for(j=1;j<=x;j++)
        {
           if(x%j==0)
            {
                if(j<x)
            cout<<j<<" ";
           else
            cout<<j;

            }
        }
        cout<<endl;

    }
}
