#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[]="Reshma";
    char name1[10];
    char name2[]="Israt";
    int len = strlen(name);
    cout<<len<<endl;
    strcpy(name1,name);
    cout<<name1<<endl;
    strcat(name2,name1);
    cout<<name2<<endl;
    strupr(name);
    cout<<name<<endl;
    strlwr(name);
    cout<<name<<endl;
    int value = strcmp(name,name2);
    if(value==0)
        cout<<"strings are equeal"<<endl;
    else
     cout<<"strings are not equeal"<<endl;
    return 0;
}
