#include<iostream>
using namespace std;
class student
{
    public:
    int roll;
    float cgpa;
    char name[20];
    putinput()
    {
        cout<<"Enter Name,Roll and CGPA:";
        cin>>name>>roll>>cgpa;
    }
    getoutput()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"CGPA:"<<cgpa<<endl;
    }
};
int main()
{
    student p,q,r;
    p.putinput();
    p.getoutput();
    q.putinput();
    q.getoutput();
    r.putinput();
    r.getoutput();

}
