#include<iostream>
using namespace std;
class Box
{
    double width;
    public:
        friend void printWidth(Box ob);
        void setWidth(double w);


};
void Box :: setWidth(double w)
{
  width = w;
}
void printWidth(Box ob)
{
    cout<<ob.width<<endl;
}

int main()
{
    Box obj;
    obj.setWidth(12.2);
    obj.printWidth(obj);
}

