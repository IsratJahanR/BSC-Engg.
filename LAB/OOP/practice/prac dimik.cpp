#include<bits/stdc++.h>
using namespace std;
void find_divisor(int x)
{
    int i;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            cout<<i;
    }
    cout<<endl;
}
int main()
{

    int p,t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
    cin>>p;
    cout<<"Case "<<j+1<<": ";
    find_divisor(p);

    }


}
