#include<iostream>
using namespace std;
class A
{
    public:
    virtual void show()=0;
};
class B : public A
{
public:
    void show()
    {
        cout<<"Virtual is called"<<endl;
    }
};
int main()
{
    A *obj;
    B b;
    obj = &b;
    obj->show();
}


