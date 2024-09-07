#include<iostream>
using namespace std;
class Reshma
{
    public:
    string name;
    int age;
    int id;
    void display()
    {
        cout<<"NAME:"<<name<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"AGE:"<<age<<endl;

    }
};
int main()
{
    Reshma obj;
    obj.id=101;
    obj.name="RESHMA";
    obj.age=20;
    obj.display();
    return 0;
}
