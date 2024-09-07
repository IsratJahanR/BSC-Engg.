#include <iostream>

using namespace std;

//class definition
class A{
	private:
		int a;
		int b;
		void set_a(int u){
			a=u;
		}
		//set value of b
		void set_b(int v){
			b=v;
		}
	public:
		void getValues(int x,int y){
			set_a(x); //calling private member function
			set_b(y); //calling private member function
		}
		void putValues(){
			//printing values of private data members a,b
			cout<<"a="<<a<<",b="<<b<<endl;
		}
};

int main(){
	//creating object
	A objA;

	//set values to class data members
	objA.getValues(100,200);
	//print values
	objA.putValues();

	return 0;
}
