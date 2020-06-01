#include<iostream>
using namespace std;
void printer();
class Myclass{
	public:
	void fn1(){
		cout<<"This is fn"<<endl;
	}
	void fn2();
};
inline void Myclass::fn2(){
	cout<<"this is fn2"<<endl;
}
int main(){
	Myclass m;
	m.fn1();
	m.fn2();
	printer();
return 0;
}
void printer(){
	cout<<"This is printer"<<endl;
}
