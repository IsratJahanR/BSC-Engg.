#include<iostream>//fibonacci series
using namespace std;
int main()
{
    int i,n,num1,num2,fib;
    num1=0;
    num2=1;
    cin>>n;
    cout<<num1<<" "<<num2<<" ";
    for(i=1;i<=n;i++)
    {

        fib = num1+num2;
        num1=num2;
        num2=fib;
        cout<<fib<<" ";

    }
}
