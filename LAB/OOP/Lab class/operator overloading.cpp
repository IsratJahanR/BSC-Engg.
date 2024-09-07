#include<iostream>
using namespace std;
class excp
{
    int a,b;
    float result;
    public:
        void input()
        {
            cout<<"Enter a and b: ";
            cin>>a>>b;
        }
        void operator /()   //operator function as a member function
        {
            result=(double)a/b;
        }
        void display()
        {
            cout<<"a="<<a<<endl<<"b="<<b<<endl;
        }
};

int main()
{
    excp e;
    e.input();
    cout<<"Before overloading unary minus operator"<<endl;
    e.display();
    /e;
    cout<<"After overloading unary minus operator"<<endl;
    e.display();
    getch();
    return 0;
}
