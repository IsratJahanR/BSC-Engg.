#include<iostream>
using namespace std;
class Base
{
    protected:
    int r;
    int a;
    int b;
    int h;
    int base;
    float pi=3.14;
};
class Child:public Base
{
    public:
    circle()
    {
        cin>>r;
        cout<<pi*r*r<<endl;
    }
};
class Child1:public Base
    {
        public:
        ract()
              {
               cin>>a>>b;
               cout<<a*b;
              }
    };
   class Child2:public Base
   {
       public:
       tringle()
       {
        cin>>base>>h;
        cout<<0.5*base*h<<endl;
       }

};
int main()
{
    Child obj;
    Child1 obj1;
    Child2 obj2;
    obj.circle();
    obj1.ract();
    obj2.tringle();
}

