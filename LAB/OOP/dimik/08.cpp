#include<iostream>
using namespace std;
int main()
{
    int t,n1,n2,n3,i=1;
    cin>>t;
    while(t--)
    {
        cin>>n1>>n2>>n3;
        if((n1>n2)&&(n1>n3))
        {

            if(n2>n3)cout<<"Case "<<i<<": "<<n3<<" "<<n2<<" "<<n1<<endl;
            else cout<<"Case "<<i<<": "<<n2<<" "<<n3<<" "<<n1<<endl;

        }
        else if((n2>n1)&&(n2>n3))
         {

            if(n1>n3)cout<<"Case "<<i<<": "<<n3<<" "<<n1<<" "<<n2<<endl;
            else cout<<"Case "<<i<<": "<<n1<<" "<<n3<<" "<<n2<<endl;

        }
        else
             {

            if(n1>n2)cout<<"Case "<<i<<": "<<n2<<" "<<n1<<" "<<n3<<endl;
            else cout<<"Case "<<i<<": "<<n1<<" "<<n2<<" "<<n3<<endl;

        }
            i++;
    }
}
