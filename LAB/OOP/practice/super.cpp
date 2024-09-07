#include<iostream>
using namespace std;
class A
{
    public:
    void display()
    {
        cout<<"Display 1"<<endl;
    }
};

class C: public A
{
public:
     void display()
    {
      cout<<"Display 2"<<endl;
    }
};
int main(){
    C obj;
    obj.display();
    return 0;

}

