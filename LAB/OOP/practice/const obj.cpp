#include<iostream>
using namespace std;
class A
{
public:
    void display() const
    {
        cout<<"Display Called"<<endl;
    }
};
int main()
{
    const A obj;
    obj.display();
    return 0;
}
