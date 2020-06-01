#include<iostream>
using namespace std;;
class class2{
	public:
	char gender;
	class2(){}
	class2(char gen):gender('F'){
		gender=gen;
	}
	void pcaller(){
		pmethod();
	}
	private:
		void pmethod(){
			cout<<"I am method"<<endl;
		}
};
int main(){
	class2 *c2=new class2();
	/*class2 c2;
	cout<<c1.age<<endl;*/
	cout<<c2->gender<<endl;
return 0;
}
