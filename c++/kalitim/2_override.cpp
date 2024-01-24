#include <iostream>
using namespace std;
//override: taban s�n�fa ait bir metodun t�retilmis bir s�n�f�n i�erisinde ayn� isimde tan�mlanarak taban s�n�ftak� metodun yerine ge�irilmeye �al���lmas�na denir. 

//i�inde 100 eleman bulunan bir dizi tan�ml�yorum
class Base{
	public:
		int data[100];
		int size;
		Base():size(0){}
		void add(int value){data[size]=value;size++;}
		
		void print()const{
		printf(" base yazdiriyorum  ");
		for(int i=0;i<size;i++)
			cout<<data[i]<<" ";
		
		}
};

class Derived:public Base{
	public:
		float data[100];
		int size;
		Derived():size(0){}
		void add(float value){data[size]=value;size++;}
		
		void print()const{
			
			Base::print();
			printf("  devired yazdiriyorum  ");
			for(int i=0;i<size;i++)
				cout<<data[i]<<" ";
		}
		
		void addInt(int value){
			//base s�n�f�na git oradaki add fonksiyonunu kullanarak dataya valueyi ekle
			Base::add(value);
		}
};
int main(){
	Base b;
	b.add(15);
	b.add(15);
	b.add(15);
	b.add(15);
	b.add(15);
	b.print(); 
	Derived d;
	d.add(1.2);
	d.add(1.2);
	d.addInt(5);
	d.add(1.2);
	d.print(); 
	
	return 0; 
}
