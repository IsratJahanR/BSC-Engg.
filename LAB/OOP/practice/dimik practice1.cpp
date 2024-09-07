#include<iostream>
using namespace std;
int main()
{
    int T,n[10],i;
    cin>>T;
    for(i=0;i<T;i++)
        cin>>n[i];
    for(i=0;i<T;i++)
    {
        cout<<"Case "<<i+1<<": ";
        for(int j=1;j<=n[i];j++)
        {
            if(n[i]%j==0){
                if(n[i]==j)
                cout<<j;
                else
                    cout<<j<<" ";
            }
        }
        cout<<endl;
    }


}
