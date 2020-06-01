#include<iostream>
using namespace std;
class Myclass{
	public:
	int x=10;
	int y=20;
	void fn(int& p,int& q)const{
	int temp=23;
	p=temp;
	cout<<p<<endl;
	q=43;
	}
};
int main(){
	Myclass m;
	m.fn(m.x,m.y);
	cout<<m.x<<endl;
	cout<<m.y<<endl;
	return 0;
}
