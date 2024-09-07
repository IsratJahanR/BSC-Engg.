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
    public:
    virtual void Area()=0;

};
class Child:public Base
{
    public:
   void Area()
    {
        cin>>r;
        cout<<pi*r*r<<endl;
    }
};
class Child1:public Base
    {
        public:
       void Area()
              {
               cin>>a>>b;
               cout<<a*b<<endl;
              }
    };
   class Child2:public Base
   {
       public:
       void Area()
       {
        cin>>base>>h;
        cout<<0.5*base*h<<endl;
       }

};
int main()
{
    Base *m;
    Child obj;
    Child1 obj1;
    Child2 obj2;
    m=&obj;
    m->Area();
     m=&obj1;
    m->Area();
     m=&obj2;
    m->Area();
}

