#include<bits/stdc++.h>
using namespace std;
void findBinary(long long x,int n)
{
    int binary[1000],i=0,j;
    while(x!=0)
    {
        binary[i++]=x%2;
        x=x/2;
        //i++;
    }
    //cout<<i<<endl;
    if(n==i){for(int j=i-1;j>=0;j--)cout<<binary[j];  }
    else if(n>i)
    {
        int nn=n-i;
        for(int k=0;k<nn;k++)cout<<0;
        for(int j=i-1;j>=0;j--)cout<<binary[j];
    }
    else
    {
        int nnn=i-n;
        for(int j=i-1-nnn;j>=0;j--)cout<<binary[j];

    }

}
int main()
{
    int n,m,l,r;
    cin>>n>>m;
    long long sum[m];
    for(int i=0;i<m;i++)
    {

        cin>>l>>r;
        sum[i]=0;
        for(int j=l;j<=r;j++)
        {
            sum[i]=sum[i]+pow(2,j);
        }


    }
    long long temp=sum[0];
    for(int i=1;i<m;i++)
    {
        temp=temp^sum[i];

    }
    //cout<<temp<<endl;
    findBinary(temp,n);


}
