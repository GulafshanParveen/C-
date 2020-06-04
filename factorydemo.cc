#include<iostream>
using namespace std;
class Myclass{
	Myclass(int m,int n){
		x=m;
		y=n;
	}
	public:
	int x,y;
	int sum(int a,int b){
		return a+b;
	}
	//using factory method
	static Myclass* factory(int a,int b){
		//using singleton pattern
		static Myclass* m=NULL;
		if(m==NULL){
			m=new Myclass(a,b);
		}
		return m;
	}
};
int  main(){
	Myclass* m=Myclass::factory(20,89);
	int k=m->sum(m->x,m->y);
	cout<<k<<endl;
	m->x=12;
	m->y=21;
	Myclass* m1=Myclass::factory(12,34);
	int j=m1->sum(m1->x,m1->y);
	cout<<j<<endl;
	return 0;
}
