#include<iostream>
#include<string>
using namespace std;

template<typename T> void printer(const T t){
	cout<<t<<endl;
}

template<typename M>
class Myclass{
	M m;
	public:
	Myclass(M m){
		this->m=m;
	}
	M getvalue(){
		return this->m;
	}
};
int main(){
	Myclass<int> *ms=new Myclass<int>(23);
	cout<<ms->getvalue()<<endl;
	printer<int>(300);
	printer(89L);
	string s="Lucknow";
	printer(s);
	return 0;
}
