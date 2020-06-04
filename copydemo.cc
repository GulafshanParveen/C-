/*copy control
	cpoy constructor + destructor + assignment
*/
#include<iostream>
using namespace std;
class Myclass{
	public:
	int age;
	char gender;
	Myclass():age(10),gender('M'){}//Now initialize default constructor here
	Myclass(int a,char g){
		age=a;
		gender=g;
	}
};
int main(){
	Myclass m;//it call default destructor which is not include in program
	Myclass m1(22,'F');//direct initialization which store data
	Myclass m2=Myclass(23,'M');//object create which are assign in m2 which shows copy constructor
	Myclass m3=Myclass(24,'F');
	Myclass& m4=*(new Myclass (30,'M'));//it created  through reference
	//Myclass m4=m1;//copy constructor  (myclass& m4=m1;) method can be used
	cout<<m4.age<<" "<<m4.gender<<endl;
	return 0;
}
