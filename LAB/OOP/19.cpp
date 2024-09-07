#include<iostream>
using namespace std;
class Box
{
public:
    double l,w,h;
    Box()
    {
        l=0;
        w=0;
        h=0;

    }
    double volume();


};
double Box :: volume()
{
    return l*w*h;

}
int main()
{
    Box box1;
    box1.l=5.6;
    box1.w=2.3;
    box1.h=1.3;
    double v=box1.volume();
    cout<<v<<endl;
}
