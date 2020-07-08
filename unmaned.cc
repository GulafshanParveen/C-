#include<iostream>
using namespace std;
namespace{
	int add(int x,int y){
		return x+y;
	}
}

void caller(){
	cout<<add(4,6)<<endl;
}
