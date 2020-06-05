#include<iostream>
using namespace std;
class Myclass{
	public:
	int age,salary;
	Myclass():age(10),salary(20){}
	private:
	Myclass(const Myclass& my):age(my.age),salary(my.salary){}
	friend int main();
};
int main(){
	Myclass m;
	cout<<m.age<<" "<<m.salary<<endl;
	m.age=20;
	m.salary=2000;
	//copy format
	Myclass m1=m;
	cout<<m1.age<<" "<<m1.salary<<endl;
return 0;
}
