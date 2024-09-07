#include<iostream>
using namespace std;
class A
{
    int a,b,c;
    public:
    A(int x,int y,int z)
      {
          a=x;
          b=y;
          c=z;
      }
      friend class B;
};
class B
{
public:
    void display(A ob)
    {
        cout<<ob.a+10<<" "<<ob.b+10<<" "<<ob.c+10<<endl;
    }

};
int main()
{
    A obj(2,3,4);
    B obj1;
    obj1.display(obj);
}
