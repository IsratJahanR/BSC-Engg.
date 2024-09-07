#include<iostream>
#include<string>
using namespace std;
class student
{
public:
    string name;
    int age;
    string gender;
    int marks;
    void showoutput()
    {
     cout<<name<<" "<<age<<" "<<gender<<" "<<marks<<endl;
    }
};
class person:public student
{
public:
    void display(string n1, int a1,string g1,int m1)
    {
        name=n1;
        age=a1;
        gender=g1;
        marks=m1;
    }
};

int main()
{
person obj;
obj.display("israt" ,19,"Female",75);
obj.showoutput();
}





