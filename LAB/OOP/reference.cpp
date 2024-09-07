#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int &p=a;
    int &q=b;
    p=3;
    q=4;
    cout<<p<<endl;
    cout<<q<<endl;

}
