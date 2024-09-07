#include<iostream>

using namespace std;

class nest

{
      public:
      int a,b;

      int findL( )

      {

           if(a>b)return a;
           else return b;

      }
void disp_num()

{

      int sq=findL();        //nesting of member function
      cout<<"\nThe square of "<<a<<" is  " <<sq;
}

};

int main()

{

      nest n1;

      n1.a = 10;
      n1.b = 20;

      n1.disp_num();

      return 0;

}

