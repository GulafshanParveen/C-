#include<iostream>
#include<string>
using namespace std;

template<class T>
class Myclass{
	public:
	void printer(T t){
		cout<<t<<endl;
	}
};
/*
class Myclass<string>{
	public:
	void printer(string t){
		cout<<t<<endl;
	}
};

class Myclass<int>{
	public:
	void printer(int t){
		cout<<t<<endl;
	}
};*/
int main(){
	Myclass<string> m1;
	Myclass<int> m2;
//	Myclass<double> m3;
	string s="Lucknow";
	m1.printer(s);
	m2.printer(10);
	m2.printer(2.4);
	return 0;
}
