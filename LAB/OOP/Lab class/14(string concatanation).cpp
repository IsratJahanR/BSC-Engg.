#include<iostream>
#include<string.h>
using namespace std;
class conct
{
public:
   char s1[100],s2[100];

    conct(char a[],char b[])
    {
        strcpy(this->s1,a);
        strcpy(this->s2,b);
    }
    void operator+(){
    cout<<"concatanation:"<<strcat(s1,s2);
    }


};
int main()
{

    conct a1("israt","jahan");
    +a1;
    return 0;
}

