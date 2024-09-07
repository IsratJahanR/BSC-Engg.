#include<iostream>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{

    student Alim(101,3.56);
    Alim.display();
    student suparna(102,3.96);
    suparna.display();
    return 0;
}
