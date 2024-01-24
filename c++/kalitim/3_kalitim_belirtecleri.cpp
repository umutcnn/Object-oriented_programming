#include <iostream>
using namespace std;
class A{
	private: 
		int priA;
	protected:
		int proA;
	public:
		int pubA;
		A():pubA(0),proA(1),priA(2){}
};


class B:public A{
	private:
		int priB;
	protected:
		int proB;
	public:
		int pubB;
		B():A(),pubB(3),proB(4),priB(5){}
		void yazdir(){
			cout<<A::pubA<<" "<<A::proA<<endl;
		}
};
int main(){
	B b;
	cout<<b.;
	return 0;
}
