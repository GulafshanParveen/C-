#include<iostream>
using namespace std;
class Base1{
        public:
        void printer(){
                cout<<"I am printer"<<endl;
        }
};
class Base2:public Base1{
        public:
        void printer(){//Function Overriding
                cout<<"I am display"<<endl;
        }
};
//overriding in multi level inheritance
class Child:public Base2{};//comment<-
int main(){
	//Base2 b; b.printer();
        Child ch;
        ch.printer();
        return 0;
}
