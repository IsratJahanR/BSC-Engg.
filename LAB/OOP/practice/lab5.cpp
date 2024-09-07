#include<iostream>
using namespace std;
class A
{
    double a,b,c;
public:
    void set(double x, double y, double z)
    {
        a = x;
        b = y;
        c = z;
    }
    double volume()
    {
        return a*b*c;
    }
    friend class B;

};
class B //: public A
{
    public:
   void see(A ob)
   {
       cout<<ob.a<<endl;
   }
};

int main()
{
   A obj;
   obj.set(1,2,3);
   double res = obj.volume();
   cout<<res<<endl;
   B obj1;
   obj1.see(obj);
}


