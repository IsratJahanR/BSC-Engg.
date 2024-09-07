#include <iostream>

using namespace std;

//class definition
class student{

	public:
	    int age;
	    student(int a)
	    {
	        age = a;
	    }
	    void display()
	    {
	        cout<<age<<endl;
	    }

};

int main(){
	student obj(10);
	obj.display();
	return 0;
}
