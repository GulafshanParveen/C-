#include<iostream>
using namespace std;
class Base{
	public:
	Base(){
		cout<<"Base Constructor"<<endl;
	}
	void printer(){
		cout<<"Printer of base"<<endl;
	}
	virtual void display(){
		cout<<"Display of base"<<endl;
	}
};
class Derived:public Base{
	public:
	Derived(){
		cout<<"Derived Constructor"<<endl;
	}
	void printer(){
		cout<<"printer of Derived"<<endl;
	}
	void display(){
		cout<<"Display of derived"<<endl;
	}
};
int main(){
	//Base* d=new Derived();
	Derived* d=new Derived();
	d->printer();
	d->display();
	return 0;
}
