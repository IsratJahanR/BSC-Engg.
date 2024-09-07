//#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int i,j,r=0,x,y,z,n,m,s=0,len;
#define pi acos(-1)
int main()
{
    cin>>m;
    while(m--)
    {
        int p=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            if(pow(2,i)==n)
            {
                p=1;
                cout<<"YES"<<endl;
                break;
            }
        }
        if(p!=1)cout<<"NO"<<endl;
    }
}
