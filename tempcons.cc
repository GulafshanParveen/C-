#include<iostream>
#include<string>
using namespace std;

//template<typename T>

class Myclass{
	public:
	template <typename T>class Demo{
		public:
		void printer(T t){
			cout<<t<<endl;
		}
	};
	void display(){
		//Demo<int> d;
		//d.display(10);
		cout<<"Display Function"<<endl;
	}
};
int main(){
	Myclass M;
	M.display();
	Myclass::Demo<int> d;
	d.printer(20);
	return 0;
}
