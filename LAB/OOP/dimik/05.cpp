#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {cin>>x;
     for(j=1;j<=x;j++)
     {
         for(k=1;k<=x;k++)
     {
        cout<<"*";
     }
     cout<<endl;
     }
     cout<<endl;
    }
}
