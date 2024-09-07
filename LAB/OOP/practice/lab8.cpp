#include<iostream>
using namespace std;
class A
{

public:
    int a,b,c;
    A(int x=0, int y=0, int z=0)
    {
        a = x;
        b = y;
        c = z;
    }
    A operator+(A const &obj)
    {
        A res;
        res.a = a+obj.a;
        res.b = b+obj.b;
        res.c = c+obj.c;
        return res;
    }
    void print()
    {
        cout<<a<<"i+"<<b<<"j+"<<c<<"k"<<endl;
    }
};

int main()
{
   A a(2,3,4);
   A b(4,5,6);
   A c = a+b;
   c.print();
   return 0;

}





