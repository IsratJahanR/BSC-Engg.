#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()
    {
        cout<<"AAAA"<<endl;
    }
};
class B : public A
{
    public:
     void show()
    {
        cout<<"BBBB"<<endl;
    }
};
class C : public A
{
    public:
     void show()
    {
        cout<<"CCCC"<<endl;
    }
};

int main()
{
    A *a;
    B b;
    C c;
    a = &b;
    a->show();

    a =&c;
    a->show();
}

