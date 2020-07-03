#include<iostream>
using namespace std;
class Bean{
        public:
        void printer(){
		cout<<"Printer of bean called"<<endl;
	}
};
class Mybean{
        public:
        void printer(){
                cout<<"Printer is mybean called"<<endl;
        }
};
class Myclass{
        public:
	Bean b;
        int calculator(){
                int x,y;
                cout<<"Enter two nummbers:";
                cin>>x>>y;
                if(x<0||y<0){
                        throw b;
                }return x*y;
        }
        void printer(){
                int results;
                try{
                        results=calculator();
                        cout<<"Result="<<results<<endl;
                }catch(...){
                        b.printer();
                }
                cout<<"End of Printer"<<endl;
        }
};
int main(){
        Myclass M;
        M.printer();
        return 0;
}



