#include <iostream>
using namespace std;

class excp
{
   private:
      int count;

   public:
       excp(): count(5){}

       void operator ++()
       {
          count = count+1;
       }
       void Display(){
            cout<<"Count: "<<count;
             }
};

int main()
{
    excp obj;
    ++obj;
    obj.Display();
    return 0;
}
