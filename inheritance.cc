#include<iostream>
using namespace std;
class Base{
	public:
	void printer(){
		cout<<"I am public printer"<<endl;
	}
	protected:
	void display(){
		cout<<"I am protected"<<endl;
	}
	private:
	void show(){
		cout<<"I am private"<<endl;
	}
};
class Derived:public Base{
	public:
	void abc(Derived* d){
		d->display();
	}
};
int main(){
	Base* b=new Base();
	b->printer();
	Derived* d=new Derived();
	d->printer();
	d->abc(d);
	//d->show();
	return 0;
}
