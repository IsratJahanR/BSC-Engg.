#include<iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    float gpa;
    display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
        cout<<gpa<<endl;
    }
    input()
    {
        cin>>id>>name>>gpa;
    }
};
int main()
{
student Reshma;
Reshma.input();
Reshma.display();
return 0;
}
