#include<iostream>
#include<string>
using namespace std;

template<int x,int y>
class Myclass{
	int a,b;
	public:
	Myclass():a(x),b(y){}
	void printvalues(){
		cout<<a<<"  "<<b<<endl;
	}
};

int main(){
	int q=5;//const int q=5;
	int p=8;//const int p=8;
	Myclass<3,9> m; //Myclass <q,p> q and p must be constant
	m.printvalues();
	return 0;
}
