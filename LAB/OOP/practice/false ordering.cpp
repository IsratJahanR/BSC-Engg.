#include<iostream>
using namespace std;
int main()
{
    int n,x[1005],i,j,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>x[i];
    for(i=0;i<n;i++)
    {
        for(j=1;j<=1000;j++)
        {
            if(x[i]%j==0)
                c++;
        }
        cout<<"Case "<<i+1<<": "<<c<<endl;
        c=0;
    }
}
