
using namespace std;
class APIBase{
	protected:
	APIBase(){}
	public:
	virtual void printer(){
		cout<<"Printer of API Base"<<endl;
	}
	/*static APIBase& afctory(){
		APIBase* api=new APIBase();
		return (*api);
	}*/
	friend APIBase& factory();
};
class APIDerived:public APIBase{
	protected:
	APIDerived(){}
	public:
	virtual void printer(){
		cout<<"Printer of APIDerived"<<endl;
	}
	friend APIBase& factory();
};
APIBase& factory(){
	APIBase* ab=new APIDerived();
	return (*ab);
}
