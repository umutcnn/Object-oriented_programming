#include <iostream>
using namespace std;

int main(){
	int s1,s2;
	
	cout<<"lutfen sayi1 giriniz: ";
	cin>>s1;
	
	cout<<"lutfen sayi2 giriniz: ";
	cin>>s2;
	
	
	//eger sayi1 > 0 ve sayi2 > 0 ise iki sayý da pozitiftir.
	if(s1>0 && s2>0){
		cout<<"her iki sayi da pozitif. ";
	}
	
	//eger sayi1 < 0 ve sayi2 < 0 ise iki sayý da  negatiftir
	else if(s1<0 && s2<0){
		cout<<"her iki sayi da negatif. ";
	}
	//eger sayi1 < 0 veya sayi2 < 0 ise iki sayýdan yanlizca 1 tanesi negatiftir
	else if(s1<0 || s2<0){
		cout<<"bir tanesi negatif. ";
	}
	else{
		cout<<"bir tanesi ya da ikisi de 0'dir'. ";
	}
	
}
