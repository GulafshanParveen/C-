#include<iostream>
using namespace std;

namespace mynamespace{
	void printer();
}

void mynamespace::printer(){
	cout<<"I am printer"<<endl;
}

int main(){
	mynamespace::printer();
	return 0;
}
