#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(n--)
    {
        cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
        cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<endl;
        i++;
    }
}
