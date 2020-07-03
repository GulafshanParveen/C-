#include <iostream>
#include "myheader"
using namespace std;
int add(int x,int y){
		return x+y;
	}
	template <typename T,typename M,typename N> T sum(const M& m,const N& n){
		return m+n;
	}
	template<typename T>class Myclass{
		T t;
		public:
		void setValue(T t){
			this->t=t;
		}
		T getValue(){
			return this->t;
		}
	};
	int main(int argc,char* argv[]){
		int (*fp)(const int&,const int&)=sum;
		cout<<fp(12,23)<<endl;
		//cout<<add(10,20)<<endl;
		//cout<<sum<int,int,int>(20,40)<<endl;
		Myclass<int> m;
		m.setValue(30);
		cout<<m.getValue()<<endl;
		return 0;
	}
