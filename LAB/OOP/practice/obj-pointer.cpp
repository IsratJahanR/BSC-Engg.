#include<iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"Display is called"<<endl;
    }
};
int main()
{
    A obj;
    A *p;
    p = &obj;
    p->display();
    return 0;
}
