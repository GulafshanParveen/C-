#include<iostream>
//#include"API.h"
#include"Agreement.h"
using namespace std;
class AgrChild:public AgrBase{
	public:
	void printer(){
		cout<<"Hello I am printer"<<endl;
	}
};
int main(){
        /*APIBase& ab=factory();
        ab.printer();*/
	AgrBase* a=new AgrChild();
	Myclass m;
	m.caller(*a);
        return 0;
}



