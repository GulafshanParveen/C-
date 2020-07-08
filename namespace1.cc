#include<iostream>

namespace firstname{
	void printer(){
		std::cout<<"I am printer 1"<<std::endl;
	}
}

namespace secondname{
	void printer(){
		std::cout<<"I am printer 2"<<std::endl;
	}
}

int main(){
	using namespace firstname;
	printer();
	secondname::printer();
	return 0;
}
