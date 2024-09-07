#include<iostream>
using namespace std;
void func(int a)
{
    try{
    if(a==0)
    throw a;
    if(a==1)
        throw a;
    }
    catch(int y)
    {
            cout<<"exception caught"<<endl;

    }
    catch(int x)
    {
            cout<<"exception caught1"<<endl;

    }
}
int main()
{
    func(1);
    func(2);
    func(0);
    return 0;
}
