#include<iostream>
using namespace std;
class Student
{
public:
   virtual void display()
    {
        cout<<"STUDENT"<<endl;
    }
};
class Teacher:public Student
{
public:
    void display()
    {
        cout<<"TEACHER"<<endl;
    }
};
int main()
{
    Teacher T;
   // Student st;
   Student *S;
   //S=&st;
   //S->display();
   S=&T;
   S->display();

   /*Teacher T;
  // Student &S=T;
   S.display();*/
    return 0;
}
