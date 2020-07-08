#include<iostream>

namespace mynamespace{
	class Myclass{
		public:
		void printer(){
			std::cout<<"Printer function"<<std::endl;
		}
	};
	class yourclass{
		public:
		void display(){
			std::cout<<"Display function"<<std::endl;
		}
	};
}

/*namespace mnamespace{
	class Mclass{
		public:
		void caller(){
			mynamespace::Myclass m;
			m.printer();
			mynamespace::yourclass y;
			y.display();
		}
	};
}*/
namespace mnamespace{
	using mynamespace::Myclass; //using declaration
	using mynamespace::yourclass;//using declartion
	using namespace mynamespace;//using directive
	class Mclass{
		public:
		void caller(){
			Myclass m;
			m.printer();
			yourclass y;
			y.display();
		}
	};
}
		
int main(){
	mnamespace::Mclass ms;
	ms.caller();
	return 0;
}
