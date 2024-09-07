#include<iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;
public:
    int marks;
    void display()
    {
     cout<<roll<<" "<<name<<endl;
    }
    double volume();
};
int main()
{
    Student obj;
    obj.marks=67;
    obj.display();
}


