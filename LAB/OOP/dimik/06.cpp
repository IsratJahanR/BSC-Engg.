#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        cout<<"Sum = "<<(n/10000)+(n%10)<<endl;
    }
}
