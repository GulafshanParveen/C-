#include<iostream>
using namespace std;
class Myclass{
	void printer(){
		cout<<"I am printer"<<endl;
	}
	public:
	void abc(){
		cout<<"I am abc"<<endl;
	}
	friend  class Mclass;
};
class Mclass{
	public:
	void caller(){
		Myclass m;
		m.printer();
		m.abc();
	}
};
int main(){
	Mclass m1;
	m1.caller();
	return 0;
}
