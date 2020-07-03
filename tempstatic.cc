#include<iostream>
#include<string>
using namespace std;

template<typename T>

class Myclass{
	static int data;
	public:
	static void setdata(int a){
		data=a;
	}
	static int getdata(){
		return data;
	}
};

template<typename T>
int Myclass<T>::data=0;

int main(){
	Myclass<int> m1;
	Myclass<int> m2;
	Myclass<string> m3;
	Myclass<string> m4;
	cout<<Myclass<int>::getdata()<<endl;
	cout<<m2.getdata()<<endl;
	cout<<m3.getdata()<<endl;
	cout<<m4.getdata()<<endl;
	m1.setdata(20);
	m3.setdata(90);
	cout<<m1.getdata()<<endl;
	cout<<m2.getdata()<<endl;
	cout<<m3.getdata()<<endl;
	cout<<m4.getdata()<<endl;
	return 0;
}
