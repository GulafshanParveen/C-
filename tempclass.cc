#include<iostream>
#include<string>
using namespace std;

template<typename T,typename S> T square(const S s){
	return s*s;
}

int main(){
	int x=square<int>(3);
	long ln=square<long>(89L);
	double d=square<double>(32.222);
	cout<<x<<" "<<ln<<" "<<d<<" "<<endl;
	return 0;
}
