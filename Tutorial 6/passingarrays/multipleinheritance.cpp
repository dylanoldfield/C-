#include <iostream>

// when running this it is called from left tree first and then right tree and destoryed from right tree first then left. T
// there will be two instances of A which is why you need virtual to specify which one to access the specific data.To access
// the indivdual instances you have to create a getter method within the parent class as shown below
class A {
public:
 A(int data) : m_data(data) { std::cout << "cstor A" << std::endl; }
 virtual ~A() { std::cout << "dstor A" << std::endl; }
 void foo() { std::cout << "foo()" << std::endl; }
 int m_data;
};

// by adding virtual it will create only one instance of A so that the data can be called
class Left : public A {
public:
 Left() : A(1) { std::cout << "cstor Left" << std::endl; }
 virtual ~Left() { std::cout << "dstor Left" << std::endl; }
 int getA(){return m_data;}
};
class Right : public A {
public:
 Right() : A(2) { std::cout << "cstor Righ" << std::endl; }
 virtual ~Right() { std::cout << "dstor Right" << std::endl; }
};

// if it is inheriting from a virtual class then you need to instantiate the parent class to manipulate the data
struct Hybrid : public Left, public Right {
public:
 Hybrid() { std::cout << "cstor Hybrid" << std::endl; }
 virtual ~Hybrid() { std::cout << "dstor Hybrid" << std::endl; }
};
int main() {
 Hybrid x;
 //must use specific namespace and getter method to get specific branch data
 std::cout << x.Left::getA() << "\n";

}
