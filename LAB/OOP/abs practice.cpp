#include<iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout<<"\n DISPLAY BASE";
    }
    virtual void show()
    {
        cout<<"\n SHOW BASE";
    }
};
class Derived:public Base
{
public:
    void display()
    {
        cout<<"\n DERIVED DISPLAY";
    }
    void show()
    {
        cout<<"\n DERIVED SHOW";
    }
};
int main()
{
    //Base B;
    Derived D;
    Base *bptr;
    //cout<<"\n bptr points to base";
    //bptr = &B;
    //bptr->display();
    //bptr->show();
    //cout<<"\n\n bptr points to derived";
    bptr=&D;
    bptr->display();
    bptr->show();
    return 0;
}
