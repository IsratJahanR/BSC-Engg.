#include <iostream>
using namespace std;

class ExampleClass {
  public:
    ExampleClass() {}
  	ExampleClass(int ex) {
      example_ = 0;
    }
    int&       example()        { return example_; }
    const int& example() const  { return example_; }
  	//Overload the "+" Operator
  	ExampleClass operator+ (const ExampleClass& second_object_of_class) {
    	ExampleClass object_of_class;
    	object_of_class.example() = this -> example() + second_object_of_class.example();
    	return object_of_class;
  	}
  private:
  	int example_;
};

int main() {
  ExampleClass c1, c2;
  c1.example() = 1;
  c2.example() = 2;
  ExampleClass c3 = c1 + c2;
  //Calls operator+() of c1 with c2 as second_object_of_class
  //c3 gets set to object_of_class
  cout << c3.example();
}
