#include<iostream>
using namespace std;
void twoParts(string str)
{
    int flag = 0;
    string a = "";
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '4') {
            str[i] = '3';
            a += '1';
            flag = 1;
        }
        else if (flag)
            a += '0';
    }
      cout << str << " " << a;
}
  int main()
{
    string str;
    cin>>str;
    twoParts(str);

    return 0;
}
