//Multiple Inheritance
#include<iostream>
using namespace std;
class Base1{
	public:
	void printer(){
		cout<<"I am printer"<<endl;
	}
};
class Base2{
	public:
	void display(){
		cout<<"I am display"<<endl;
	}
};
//it inherits both class base1 and base2 with the help of (,) we inherits.
class Child:public Base1,public Base2{};
int main(){
	Child ch;
	ch.printer();
	ch.display();
	return 0;
}
