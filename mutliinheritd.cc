#include<iostream>
using namespace std;
class MyClass{
	public:
	void MyclassPrinter(){
		cout<<"Myclass Printer"<<endl;
	}
};
class YourClass{
	public:
	void YourClassPrinter(){
		cout<<"YourClass Printer"<<endl;
	}
};
class MClass:public MyClass,public virtual YourClass{
	public:
	void MClassPrinter(){
		cout<<"MClass Printer"<<endl;
	}
};
class ChildClass:public MClass,public virtual YourClass{
	public:
	void ChildClassPrinter(){
		cout<<"ChildClass Printer"<<endl;
	}
};
int main(){
	ChildClass m;
	m.MyclassPrinter();
	m.YourClassPrinter();
	m.MClassPrinter();
	m.ChildClassPrinter();
	return 0;
}
