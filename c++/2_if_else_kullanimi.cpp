#include <iostream>
using namespace std;

int main(){
	int sifre;
	tekrar:
	cout<<"bir sifre belirleyiniz: ";
	cin>>sifre;
	
	//girilen sifreyi tekrar girdirme
	int denemeSifre;
	cout<<"sifrenizi tekrar giriniz: ";
	cin>>denemeSifre;
	if (sifre==denemeSifre){
		cout<<"dogru girdiniz tebrikler..."<<endl;
	}
	else{
		cout<<"sifreleriniz uyusmuyor yeni sifre olusturmaniz icin yonlendiriyorum... "<<endl;
		goto tekrar;
	}
	
	
	
		
	return 0;
}
