#include<iostream>
#include<string>
using namespace std;

template<typename T> class Myclass{
	public:
	void display(){
		cout<<"Hello,I am display"<<endl;
	}
	void printer();
};

template<typename T> void Myclass<T>::printer(){
	cout<<"I am printer"<<endl;
}

int main(){
	Myclass<int> m1;
	m1.display();
	m1.printer();
	return 0;
}
