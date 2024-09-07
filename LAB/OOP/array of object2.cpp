#include<iostream>
using namespace std;
class student
{
public:
    int ID;
    string name;
    int age;
    void getdata()
    {
        cin>>ID>>name>>age;
    }
    void putdata()
    {
        cout<<ID<<" "<<name<<" "<<age<<endl;
    }
};
int main()
{
    int N;
    int i;
    cin>>N;
    student I[3];
    for(i=0;i<N;i++)
    {
        cout<<"For "<<i+1<<" Student"<<endl;
        I[i].getdata();
    }
    cout<<"Information of Student";
    for(i=0;i<N;i++)
    {
        I[i].putdata();
    }

}
