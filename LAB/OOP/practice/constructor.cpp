#include<iostream>
using namespace std;
class Student
{
   private:
    int id;
    string name;
    float gpa;
   public:
    Student(int x,string y,float z)//Parameterized constructor
    {
        id=x;
        name=y;
        gpa=z;
    }
    Student(const Student &obj)//copy constructor
    {
        id=obj.id;
        name=obj.name;
        gpa=obj.gpa;
    }
    display()//dafult constructor
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<gpa<<endl;
    }
};
int main()
{
    Student Reshma(41,"RESHMA",3.8);
    Student Reshma1=Reshma;
    cout<<"Normal constructor"<<endl;
    Reshma.display();
    cout<<"Copy constructor"<<endl;
    Reshma1.display();
    return 0;
}
