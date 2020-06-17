#include<iostream>
using namespace std;
class Parent{
        public:
	const static int age=20;//virtual or static are not occurred for same variable
        int sum(int x,int y){
                return x+y;
        }
};
class Child:public Parent{
	public:
	const static int age=30;
};

int main(){
       // Parent p;
       // Child c;
	cout<<Child::age<<endl;
	cout<<Parent::age<<endl;//age of child hides age of parent
//        cout<<c.sum(2,5)<<endl;
	Parent *p=new Child();
	cout<<p->age<<endl;
        return 0;
}
