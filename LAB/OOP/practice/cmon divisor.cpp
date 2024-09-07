#include<iostream>
using namespace std;
int main()
{
    int n,i,x[400000],r,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=x[i];j++)
        {
            if(x[i]%j==0)
                r=j;
        }
    }
    cout<<r<<endl;
}
