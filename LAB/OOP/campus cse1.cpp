#include<bits/stdc++.h>
using namespace std;
class animal
{
public:
    string name;
    int age;
    set_value(string n,int a)
    {
        name=a;
        age=a;
        cout<<name<<" "<<age<<endl;
    }

};
int main()
{
animal zebra,dolphin;
zebra.set_value("reshma",19);
dolphin.set_value("DOLPHIN",20);
return 0;
}
