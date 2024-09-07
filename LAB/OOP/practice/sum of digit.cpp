#include<iostream>
using namespace std;
int main()
{
    int i=0,n,s=0,rem;
    cin>>n;
    while(n!=0){
    rem=n%10;
    n=n/10;
    s=s+rem;
    i++;
    }
    cout<<s<<endl;
}
