#include<iostream>
using namespace std;
class Base{
	public:
	void printer(){
		cout<<"Printer base"<<endl;
	}
	protected:
	void display(){
		cout<<"Protected display"<<endl;
	}
};
class derived:protected Base{
	public:
	void abc(){
		printer();
		display();
	}
};
class Child:public derived{
	public:
	void bcc(){
		printer();
		display();
	}
};
int main(){
	Child c;
//	derived d;
//	d.printer();
//	d.display();
//	d.abc();
	c.abc();
	return 0;
}
