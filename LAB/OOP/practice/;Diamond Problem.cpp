#include <iostream>

using namespace std;

//class definition
class A{

	public:
	    A()
	    {
	        cout<<"Called A"<<endl;
	    }

};
class B : public A{

	public:
	    B()
	    {
	        cout<<"Called B"<<endl;
	    }

};
class C : public A{

	public:
	    C()
	    {
	        cout<<"Called C"<<endl;
	    }

};
class D : public B, public C{

	public:
	    D()
	    {
	        cout<<"Called D"<<endl;
	    }

};


int main(){
	D a;
	return 0;
}

