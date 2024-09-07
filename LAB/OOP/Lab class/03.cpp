#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
         cin>>id;
         cin>>gpa;
         cout<<"ID="<<id<<endl<<"GPA="<<gpa<<endl;
    }
};
int main()
{
    student A;
    //A.id;
    //A.gpa;
    A.display();
}
