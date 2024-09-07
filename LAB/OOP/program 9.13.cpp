#include<iostream>
using namespace std;
class media
{
protected:
    char title[50];
    float price;
public:
    media(char *s,float a)
    {
        strcpy(title,s)
        price=a;
    }
    virtual void display()
    {

    }
};
class book:public media
{
    int pages;
public:
    book(char *s,float a,float t):media(s,a)
    {
        time=t;
    }
    void display()

};
class tape:public media
{
    float time;
    public
};
