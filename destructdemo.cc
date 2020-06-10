#include<iostream>
using namespace std;
class DDemo{
	public:
	int x;
	DDemo():x(10){}
	~DDemo(){
		cout<<"Destructor Called"<<endl;
	}
	//pop from function then it is out of scope
	void caller(){
		DDemo d;
		cout<<d.x<<endl;
	}
};
static DDemo* dp=NULL;
void call(){
	dp=new DDemo();
	dp->x=20;
	cout<<dp->x<<endl;
	delete dp;
}
int main(){
	call();
	DDemo* d1=dp;
	//in last main pop then last destructor called
	cout<<d1->x<<endl;
	d1->caller();
	return 0;
}
