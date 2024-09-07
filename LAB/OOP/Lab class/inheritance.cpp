#include<iostream>
#include<string>
using namespace std;
class Animal
{
public:
    string color;
    int legs;
    string food;
    void display()
    {
     cout<<color<<" "<<legs<<" "<<food<<endl;
    }
};
class Dog:public Animal
{
public:
    bool ferocious;
    void setColor(string cl, int l1)
    {
        color=cl;
        legs=l1;
        display();
    }
};
class Cat:public Animal
{
    public:
        int climb;
};

int main()
{
Dog dog1;
dog1.setColor("black" ,4);
}




