#include<iostream>
using namespace std;
class Myclass{
	public:
	int salary;
	int age;
	//Myclass():age(20),salary(2000){}
	//copy constructor pass only one parameter
	/*Myclass(const Myclass& my){
		age=40;
		salary=4000;
	}*/
	//if we nt using copy constructor and default constructor than at complie time it will develope automaticall both default and copy constructor

};
int main(){
	Myclass m=Myclass();
	cout<<m.age<<" "<<m.salary<<endl;
	m.age=30;
	m.salary=3000;
	Myclass m1=m;
	cout<<m1.age<<" "<<m1.salary<<endl;
	return 0;
}
//whenever we create a class constructor complier will call overload assignment operator
