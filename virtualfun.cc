#include<iostream>
using namespace std;
class Parent{		//this class is abstract class
	public:
	Parent(){
		cout<<"Constructor of Parent"<<endl;
	}
	private:
	virtual void printer()=0; //pure vitual function
	public:
	void display(){
		cout<<"Display of Parent"<<endl;
	}
	void abc(Parent& p){
		p.printer();
	}
};
class Child:public Parent{
	public:
	Child(){
		cout<<"Constructor of child"<<endl;
	}
	private:
	void printer(){
		cout<<"Printer of child"<<endl;
	}
};
int main(){
//	Parent p;//object of abstract class cannot be created
	Child c;
	c.abc(c);
//	c.display();
//	c.printer();
	return 0;
}
