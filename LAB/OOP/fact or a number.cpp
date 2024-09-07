#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int A,result;
    cout<<"enter the value of A:";
    cin>>A;
    result=fact(A);
    cout<<"the factorian is="<<result<<endl;
    return 0;

}
