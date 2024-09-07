#include<iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout<<"This is Base class"<<endl;

    }
};
class Derived:public Base{
public:
    void show()
    {
        cout<<"This is Derived class"<<endl;
    }

};
int main()
{

    Derived d;
    d.show();
}
