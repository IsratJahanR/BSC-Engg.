#include<iostream>
using namespace std;
class Box
{
private:
    int length;
    int width;
    int hight;
public:
    virtual double Volume()=0;
   void setlength(int p)
   {
       length=p;
   }
   int getlength()
   {
       return length;
   }
   void setwidth(int p)
   {
       width=p;
   }
   int getwidth()
   {
       return width;
   }
   void sethight(int p)
   {
       hight=p;
   }
   int gethight()
   {
       return hight;
   }
};
class Triangle:public Box
{
    public:
    double Volume()
    {
        return 0.5*getlength()*gethight();
    }
};
int main()
{
    Triangle t;
    t.setlength(3);
    t.sethight(4);
    double v=t.Volume();
    cout<<v<<endl;
}
