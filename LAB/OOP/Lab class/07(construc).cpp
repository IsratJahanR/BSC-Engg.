#include<iostream>
using namespace std;
class student
{
   public:
       int id;
       float gpa;
       student(int x,float y)
        {
            id=x;
            gpa=y;
        }
       student()
        {
            cout<<"default constructor"<<endl;
        }
        ~student()
        {
            cout<<"default destructor"<<endl;
        }
       void display()
        {
            cout<<id<<endl;
            cout<<gpa<<endl;
        }
};
int main()
{
    student ob;
    student alim(101,3.33);
    alim.display();
    student suparna(102,3.40);
    suparna.display();
}
