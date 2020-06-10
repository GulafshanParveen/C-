#include<iostream>
using namespace std;
class Myclass{
        int x,y;
	public:
        Myclass(int a,int b){
                x=a;
                y=b;
        }
	friend Myclass& operator+(Myclass&,Myclass&);
	int getX(){return x;}
	int getY(){return y;}
};
Myclass& operator+(Myclass& m1,Myclass& m2){
        Myclass* m=new Myclass(0,0);
        m->x=m1.x+m2.x;
        m->y=m1.y+m2.y;
        return *m;
}
int main(){
        Myclass m1(10,20);
        Myclass m2(15,30);
        Myclass& m=m1+m2;
        cout<<m.getX()<< " "<<m.getY()<<endl;
        return 0;
}








