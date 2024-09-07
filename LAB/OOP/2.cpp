#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int tc; cin>>tc; while(tc--)
    {
        ll w,h,n,i,k,sum=0,A,B,x,y,z,p=0,q,a,b,ans=10000007,j,temp;
        cin>>a>>b;
        j=0;
        while(1)
        {
            A=a;
            B=b;
            temp=0;
            if(B==1){B++; temp++; }
            while(A)
            {
                A=A/B;
                temp++;
            }
            temp+=j;
            if(ans<temp)break;
            else ans=temp;
            b++;
            j++;
        }
        cout<<ans<<endl;





    }



}

