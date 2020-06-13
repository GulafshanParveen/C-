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
        void display(){
                cout<<"I am display"<<endl;
        }
};
//multi level inheritance
class Child:public Base2{};
int main(){
        Child ch;
        ch.printer();
        ch.display();
        return 0;
}


