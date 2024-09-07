#include<iostream>
using namespace std;
class A
{
    int a=10;
    public:
    friend class B;
};
class B : public A
{
public:
    void display(A ob)
    {
        cout<<"the value of A is : "<<ob.a<<endl;;
    }


};
int main()
{
    A obj;
    B obj1;
    obj1.display(obj);
}
