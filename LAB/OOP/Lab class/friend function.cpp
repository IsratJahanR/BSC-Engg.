#include<iostream>
using namespace std;
class Base
{
    int r;
    float pi=3.14;
    public:
    friend class Child;
};
class Child:public Base
{
    public:
    get()
    {
        cin>>r;
        cout<<pi*r*r<<endl;
    }

};
int main()
{
    Child obj;
    obj.get();
}
