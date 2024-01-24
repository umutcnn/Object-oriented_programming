#include <conio.h>
#include <iostream>
using namespace std;


struct dikdortgen{
	
	int kisa;
	int uzun;
	
	void hesapla(){
		int sonuc;
		sonuc= kisa*uzun;
		cout<<sonuc;
	}
	
};

int main(){
	dikdortgen a;
	a.kisa = 5;
	a.uzun = 6;
	a.hesapla();
	
}
