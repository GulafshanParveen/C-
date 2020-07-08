#include<iostream>
using namespace std;

void printer(){
	cout<<"I am global printer"<<endl;
}
namespace firstname{
	void printer(){
		cout<<"I am printer 1"<<endl;
	}
};

namespace secondname{
	void printer(){
		cout<<"I am printer 2"<<endl;
	}
};

int main(){
	printer();
	firstname::printer();
	secondname::printer();
	return 0;
}
