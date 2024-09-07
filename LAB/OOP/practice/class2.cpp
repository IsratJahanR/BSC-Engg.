#include<iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    float gpa;
    setvalue(int x,string y,float z)
    {
        id=x;
        name=y;
        gpa=z;
    }
    display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<gpa<<endl;
    }
};
int main()
{
    Student Reshma;
    Reshma.setvalue(41,"RESHMA",3.80);
    Reshma.display();
}
