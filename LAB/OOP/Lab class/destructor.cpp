#include<iostream>
using namespace std;
class Box
{
public:
    double l,w,h;
    Box(double x,double y,double z)
    {
        l=x;
        w=y;
        h=z;

    }
    ~Box()
    {
        cout<<"destructor called";
    }
    double volume();


};
double Box :: volume()
{
    return l*w*h;

}
int main()
{
    Box box1(4.5,6.2,7.2);
    Box box2(1.2,3.2,8.3);
    double v=box1.volume();
    double v1=box2.volume();
    cout<<v<<endl<<v1<<endl;
}


