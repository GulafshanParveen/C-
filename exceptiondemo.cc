#include<iostream>
using namespace std;

class Bean{
	public:
	int a,b;
	Bean(int m,int n)try:a(m),b(n){
		if(a<10)throw a;
	}catch(int& x){
		cout<<a<<endl;
	}
};
class Myclass{
	public:
	int x,y;
	void printer();
	void display();
};
void Myclass::printer(){
		cout<<"Enter two number:"<<endl;
		cin>>x>>y;
		if(x<10 || y<20){
			Bean b(x,y);
			//throw b;
		}
}
void Myclass:: display(){
			this->printer();
}
/*		catch(Bean& bean){
			cout<<bean.a<<" "<<bean.b<<endl;
		}
	}
};*/
int main(){
	Myclass m;
	m.display();
	return 0;
}
