#include <iostream>
using namespace std;

int main(){
	//break: donguyu sonlandirir
	//continue: continue'nin altinda kalan kýsým atlanýr ve tekrar dongunun basina donulur
	
	
	//1 den 20 ye kadar 10 hariç
	for(int i = 1 ; i<=20; i++){
		if(i==10)
			continue;
		cout<<i<<endl;
	}
	cout<<endl<<endl<<endl;
	
	
	//1 den 10 a kadar 
	for(int i = 1 ; i<=20; i++){
		if(i==10)
			break;
		cout<<i<<endl;
	}
	
	return 0 ;
}
