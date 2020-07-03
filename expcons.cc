#include<iostream>
using namespace std;
class Bean{
        public:
        int correct;
        int incorrect;
	Bean(){
		cout<<"Constructor call from bean"<<endl;
	}
	~Bean(){
		cout<<"Destructor call from bean"<<endl;
	}
};
class Myclass{
        public:
        int calculator(){
                Bean b;
                int x,y;
                cout<<"Enter two nummbers:";
                cin>>x>>y;
                if(x<0){
                        b.incorrect=x;
                        b.correct=0;
                        throw b;
                }else if(y<0){
                        b.correct=x;
                        b.incorrect=y;
                        throw b;
                }return x*y;
        }
        void printer(){
                int results;
                try{
                        results=calculator();
                        cout<<"Result="<<results<<endl;
                }catch(Bean& b){
                        if(b.correct==0){
                        cout<<"Value of x less than zero"<<endl;
                        }else if(b.correct!=0){
                        cout<<"Value of y less than zero"<<endl;
                        }
                }
        }
};
int main(){
        Myclass M;
        M.printer();
        return 0;
}

