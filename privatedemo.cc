#include<iostream>
using namespace std;
class Myclass{
	int age;
	int salary;
	public:
	Myclass(int a,int s){
		age=a;
		salary=s;
	}
	void setAge(int a){
		this->age=a;
	}
	int getAge(){
		return this->age;
	}
	void setSalary(int s){
		this->salary=s;
	}
	int getSalary(){
		return this->salary;
	}
};
int main(){
	Myclass m(20,3000);
	Myclass m2(21,8900);
	m.setAge(23);
	cout<<m.getAge()<<endl;
	cout<<m.getSalary()<<endl;
	cout<<m2.getAge()<<endl;
	cout<<m2.getSalary()<<endl;
	return 0;
}
