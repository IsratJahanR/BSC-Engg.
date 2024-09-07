#include <iostream>
#include <sstream>
using namespace std;
class Student{
public:
    int a;
    int b;
    string c;
    string d;
    set_age(int x)
    {
      a=x;
    }
    set_standard(int y)
    {
        b=y;
    }
    set_first_name(string p)
    {
        c=p;
    }
    set_last_name(string q)
    {
        d=q;
    }
    int get_age()
    {
        return a;
    }
    string get_last_name()
    {
        return d;
    }
    string get_first_name()
    {
        return c;
    }
    int get_standard()
    {
        return b;
    }
    string to_string()
    {
        return (a,c,d,b);
    }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}


