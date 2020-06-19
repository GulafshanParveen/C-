#include<iostream>
#include<string>
using namespace std;
class Myclass{
	public:
	template <typename T>
	int compare(T& x,T& y);
};
template<typename T>
inline int Myclass::compare(T& x,T& y){
		if(x>y)return 1;
		if(x<y)return -1;
		return 0;
}
int main(){
	Myclass m;
	string s1="Lucknow";
	string s2="kanpur";
	cout<<m.compare(s1,s2)<<endl;
	return 0;
}
