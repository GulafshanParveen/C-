#include<iostream>
using namespace std;
class Parent{
	public:
	Parent(){
		cout<<"Constructor of Parent"<<endl;
	}
};
class Base{
	public:
	Base(){
		cout<<"I am destructor of base"<<endl;
	}
	void printer(){
		cout<<"I am printer"<<endl;
	}
};
class Base2:public Parent{
	public:
	Base2(){
		cout<<"I am destructor of Base2"<<endl;
	}
	void display(){
		cout<<"I am display"<<endl;
	}
};
class Derived:public Base,public Base2
{
	public:
	Derived(){
		cout<<"I am destructor of derived"<<endl;
	}
	void abc(){
		cout<<"I am derived"<<endl;
	}
};
int main(){
	Derived d;
	d.printer();
	d.display();
	d.abc();
	return 0;
}


