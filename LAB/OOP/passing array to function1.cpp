#include<iostream>
using namespace std;
class Student{
public:
    string name="Reshma";
    int ID=41;
    string town="Comilla";
    string gender="Female";
    void Display(Student A)
    {
        cout<<A.name<<endl;
        cout<<A.ID<<endl;
        cout<<A.town<<endl;
        cout<<A.gender<<endl;
    }
};
int main()
{
    Student obj;
    obj.Display(obj);
    return 0;
}
