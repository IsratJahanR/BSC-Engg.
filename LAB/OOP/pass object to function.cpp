#include<iostream>
using namespace std;
class Cl
{
public:
    int n=100;
    char ch='A';
    void display(Cl a)
    {
        cout<<a.n<<endl;
        cout<<a.ch<<endl;
    }
};
int main()
{
    Cl object;
    object.display(object);
    return 0;
}
