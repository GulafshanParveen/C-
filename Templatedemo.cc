#include<iostream>
#include<string>
using namespace std;

template<class T>
class Stack{
	public:
	int top=-1;
	T s[10];
	void push(T i){
		s[++top]=i;
	}
	T pop();
};
template<class T>
	T Stack<T>::pop(){
		return s[top--];
	}
template<class T,typename K>
class Myclass{
	public:
	//template<typename T>
	int compare(const T &x,const T &y){
		if(x>y)return 1;
		if(y>x)return -1;
		return 0;
	}
/*	int compare(const string& s1,const string& s2)
		if(s1>s2)return 1;
		if(s2>s1)return -1;
		return 0;
	}*/
};
int main(){
	Stack<string> s;
	s.push("Lucknow");
	s.push("Allahabad");
	cout<<s.pop()<<endl;
	Myclass<string,int> m;
	Myclass<int,int> m1;
	cout<<m1.compare(3,5)<<endl;
	/*cout<<m.compare(7.8,9.8)<<endl;
	cout<<m.compare('B','A')<<endl;*/
	cout<<m.compare("gulafsha","khan")<<endl;
	return 0;
}
