#include<iostream>
using namespace std;
class person
{
    char name[30];
    int age;
    public:
    void getdata()
    {
        cout<<"enter name: ";
        cin>>name;
        cout<<"enter age :";
        cin>>age;

    }
    void display()
    {
        cout<<"name="<<name<<endl;
        cout<<"age="<<age<<endl;
    }
};
int main()
{
    person P;
    P.getdata();
    P.display();
    return 0;
}
