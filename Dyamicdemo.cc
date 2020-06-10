#include<iostream>
using namespace std;
class Myclass{
	int data;
	public:
	void setdata(int data){
		this->data=data;
	}
	int getdata(){
		return this->data;
	}
};
void fun1(Myclass* m){
	cout<< m->getdata()<<endl;
	delete m;
}
void fun2(Myclass* m1){
	cout<< m1->getdata()<<endl;
	delete m1;
}
int main(){
	Myclass*m =new Myclass();
	m->setdata(30);
	fun1(m);
	fun2(m);
	cout<< m->getdata()<<endl;
	return 0;
}
