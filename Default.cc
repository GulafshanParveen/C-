#include<iostream>
using namespace std;
class Parent{
	public:
	int sum(int x,int y){
		return x*y;
	}
};
class Child1:Parent{};

struct Child2:Parent{};

int main(){
	Child1 c1;
	Child2 c2;
//	cout<<c1.sum(10,20)<<endl; Non-accessible
	cout<<c2.sum(2,5)<<endl;
	return 0;
}


