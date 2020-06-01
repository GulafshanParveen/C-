#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector <int> v{12,3,2,121,11};
	for(auto it=v.begin();it!=v.end();it++){
		cout<<' '<<*it<<endl;
	}
return 0;
}
