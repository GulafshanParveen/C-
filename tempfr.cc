#include<iostream>
#include<string>
using namespace std;

//void printer();
template<typename T>class Abc;
template <typename T> class Myclass{
//class Myclass{
        T t;
        void display(){
                cout<<"Display Function"<<endl;
                cout<<t<<endl;
        }
        template class Abc<int>;//friend void abc();
        public:
        Myclass(T t){
                this->t=t;
        }
};
template<typename M>
class Abc{
        public:
        void printer(){
                Myclass<int> m1(10);
                m1.display();
                string s="Lucknow";
                Myclass<string> m2(s);
                m2.display();
        }
};
int main(){
        Abc<int> a;
        a.printer();
        Abc<string> ab;
//        ab.printer();
        return 0;
}

