#include<iostream>
using namespace std;
class Base{
	public:
	Base(int x){//base(){       constructor can not be virtual
		cout<<"Base Constructor"<<endl;
	}
	void printer(){
		cout<<"Printer of base"<<endl;
	}
	virtual void display(){
		cout<<"Display of base"<<endl;
	}
	~Base(){//Destructor can be virtual
		cout<<"Destructor of Base"<<endl;
	}
};
class Derived:public Base{
	public:
	Derived(int x):Base(x){//Derived(){    it is used for parametrised constructor.
		cout<<"Derived Constructor"<<endl;
	}
	void printer(){
		cout<<"printer of Derived"<<endl;
	}
	void display(){
		cout<<"Display of derived"<<endl;
	}
	~Derived(){
		cout<<"Destructor of Derived"<<endl;
	}
};
int main(){
	//Base* d=new Derived();
	Derived* d=new Derived(10);
	d->printer();
	d->display();
	delete(d);
	return 0;
}
