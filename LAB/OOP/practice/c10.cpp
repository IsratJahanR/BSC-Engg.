#include<iostream>
using namespace std;
int main()
{
    int x[1000],i,N,c=0,k,p,j;
    cin>>N;
    for(k=0;k<N;k++)
    cin>>x[k];
    for(k=0;k<N;k++)
    {
      for(i=2;i<x[k];i++)
            {
                if(x[k]%i==0)
                {
                c++;
                break;
                }
            }
     if(c>0)
     {
         for(j=2;j<x[k]/2;j++)
         {
             if(x[k]%j==0){
                p=x[k]/j;
                cout<<"Case "<<k+1<<": "<<j<<" "<<p<<endl;
             break;
             }
         }
     }
    else{  cout<<"Case "<<k+1<<": Impossible"<<endl;}
}
}
