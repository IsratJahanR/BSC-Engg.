#include<iostream>
using namespace std;
class Base
{
    double x,y;
    public:
    Base(double a, double b)
    {
        x=a;
        y=b;
    }
    Base(const Base &obj)
    {
        x=obj.x;
        y=obj.y;
    }
    void Display()
    {
        cout<<x<<" "<<y<<endl;
    }
};
int main()
{
    Base obj1(10.1, 20.2);
    Base obj2 = obj1;
    cout<<"Normal Constructor"<<endl;
    obj1.Display();

    cout<<"COpy Constructor"<<endl;
    obj2.Display();
    return 0;

}
