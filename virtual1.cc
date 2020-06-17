#include<iostream>
using namespace std;
class Base{
        public:
        virtual void printer(){
                cout<<"Printer of base"<<endl;
        }
        void display(){
                cout<<"Display of base"<<endl;
        }
};
class Derived:public Base{
        public:
        void printer(){
                cout<<"printer of Derived"<<endl;
        }
        void display(){
                cout<<"Display of derived"<<endl;
        }
};
int main(){
        Base* d=new Derived();
        //Derived* d=new Derived(10);
        d->Base::printer();
        d->display();
        return 0;
}



