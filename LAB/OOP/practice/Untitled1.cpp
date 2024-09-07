#include<iostream>
using namespace std;
class a
{
    int p;
    public:
    double x;
    double y;
    double z;
    void setvalue(double a, double b, double c)
    {
        x=a;
        y=b;
        z=c;
    }
    double volume()
    {
        //cout<<x*y*z<<endl;
        return x*y*z;
    }
    void Display()
    {
        cout<<"Display"<<endl;

    }
    */
    a()
    {
        cout<<"Constructor"<<endl;
    }
    ~a()
    {
        cout<<"Destructor"<<endl;
    }
};
/*class b : public a
{
    public:
    void Display()
    {
        cout<<"Display B"<<endl;

    }
};*/
int main()
{
   a obj;
   //obj.setvalue(10,20,3);
   double V;
   //V = obj.
   //V=obj.volume();
   //cout<<V<<endl;
   //obj.p = 10;
   //cout<<obj.p<<endl;
   //obj.Display();
}
