#include<iostream>
using namespace std;
class Abs
{
private:
    int x;
public:
    void setx(int p)
    {
        x=p;
    }
    void incr(int q)
    {
        x=x+q;
    }
    void decr(int p)
    {
        x=x-p;
    }
    void show()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Abs obj;
    obj.setx(3);
    obj.incr(1);
    obj.decr(1);
    obj.show();


}
