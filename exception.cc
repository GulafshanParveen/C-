#include<iostream>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	try{
		if(x<0 || y<0){
			throw(x<y)?x:y;
		}
		int z=x+y;
		cout<<z<<endl;
	}catch(int& a){
		cout<<a<<"is less than zero"<<endl;
	}
	return 0;
}
