#include<iostream>
using namespace std;

int x=10;
 void printer(){
	cout<<"Independent printer"<<endl;
}
void display(){
	cout<<"Independent display"<<endl;
}
namespace {
	void display(){
		cout<<"Display of unamed"<<endl;
	}
}

int main(){
	::display();
	::printer();
	cout<<::x<<endl;
	return 0;
}

