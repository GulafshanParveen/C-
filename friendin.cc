#include<iostream>
using namespace std;
class Myclass{
	virtual void printer(){
		cout<<"Printer of myclass"<<endl;
	}
	friend void caller();
};
class child:public Myclass{
	void printer(){
		cout<<"printer of child"<<endl;
	}
	void display(){
		cout<<"Display of myclass"<<endl;
	}
};
void caller(){
//	Myclass m;
//	m.printer();
	Myclass* p=new child();
	p->printer();
	//child c;
	//c.printer();
//	c.display();
}
int main(){
	caller();
	return 0;
}
