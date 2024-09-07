#include <iostream>

using namespace std;

class Box
{
private:
    double length, width, height;
public:
    Box()
        {
            length = 10;
            width = 2;
            height = 5;

        }
    Box(double l, double w, double h)
    {
            length = l;
            width = w;
            height = h;

        }
    void display()
    {
        cout<<"Length: "<<length<<endl;
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl<<endl;
    }
};

int main() {

    Box client1[10];
    Box client2(30, 10, 10);

    for(int i = 0; i < 10; i++) client1[i].display();

    client2.display();


    return 0;
}
