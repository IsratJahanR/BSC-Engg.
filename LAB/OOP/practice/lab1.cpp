#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    double c;
    A(int x,int y,double z)
    {
        a= x;
        b= y;
        c= z;
    }
    A()
    {
        a = b =1;
        c = 1.23;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    double sum()
    {
        return a+b+c;
    }
    ~A()
    {
        cout<<"destructor is called"<<endl;
    }
};
int main()
{
    A obj,obj1(10,20,30.333);
    obj.display();
    //obj.set1();
    obj1.display();
    double abc = obj.sum();
    cout<<abc<<endl;

    abc = obj1.sum();
    cout<<abc<<endl;
}

