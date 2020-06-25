#include<iostream>
#include<string>
using namespace std;
typedef int T;
template<typename T,typename S>
class Myclass{
        public:
        void printer(T t,S s){
                cout<<t<<" "<<s<<endl;
        }
};
/*void display(){
	T x=20;
	cout<<x<<endl;
}*/
/*class Myclass<int,string>{}
class Myclass<string,int>{}
class Myclass<string,string>{}*/
int main(){
        Myclass<int,string> m1;
	Myclass<string,int> m2;
	Myclass<string,string> m3;
	T x=10;
	//display();
	string s="Gulafsha";
	m2.printer(s,x);
        return 0;
}


