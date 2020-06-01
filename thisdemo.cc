#include<iostream>
using namespace std;
class Myclass{
	Myclass(){};
	public:
	Myclass* printer(){
		cout<<"hello printer"<<endl;
		return this;
	}
	static Myclass* ObjectCreator(){
		Myclass *m=new Myclass();
		return m;
	}
	void abc(){
		cout<<"I am ABC"<<endl;
	}
};
int main(){
	Myclass *m=Myclass::ObjectCreator();
	Myclass* m2=m->printer();
	m->abc();
return 0;
}
