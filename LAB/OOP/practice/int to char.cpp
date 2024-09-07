#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    stringstream os;
    os<<"software";
    cout<<os.str()<<endl;
    os.str("testinghelp");
    cout<<os.str()<<endl;
    stringstream ss;
    ss<<"13 04 2020";
    string mystr1;
    ss>>mystr1;
    string mystr2;
    ss>>mystr2;
}
