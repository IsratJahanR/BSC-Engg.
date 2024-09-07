#include<iostream>
using namespace std;
class student
{
public:
    int id=41;
    string name="RESHMA";
    float gpa=3.79;
    display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<gpa<<endl;
    }
};
int main()
{
student Reshma;
/*
Reshma.id=41;
Reshma.name="RESHMA";
Reshma.gpa=3.70;*/
Reshma.display();
return 0;
}

