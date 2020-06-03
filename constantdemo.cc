#include<iostream>
using namespace std;
class Myclass{
	public:
	// mutable use for modification
	mutable int x;
	Myclass():x(10){}
	void printer()const;
};
void Myclass::printer()const{
	int y=20;
	y++;
	cout<<y<<endl;
	this->x++;
	cout<<this->x<<endl;
}
int main(){
	Myclass m;
	m.printer();
	return 0;
}
