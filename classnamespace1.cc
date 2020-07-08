#include<iostream>
using namespace std;

namespace mynamespace{
        void printer();
        class Myclass;
}

void mynamespace::printer(){
	cout<<"I am printer"<<endl;
}

class mynamespace::Myclass{
                public:
                void display(){
                        cout<<"Display method"<<endl;
                }
};

int main(){
        mynamespace::printer();
        mynamespace::Myclass *m=new mynamespace::Myclass();
        m->display();
        return 0;
}


