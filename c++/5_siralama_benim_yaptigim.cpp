#include <iostream>
using namespace std;

int main(){
	//kullanicidan 3 tane sayi al en buyugunu ekrana yazdir ve bunlar� yaparken en az say�da kod kullanmaya dikkat et.
	
	int s[2],sayi;
	
	//3 adet sayiyi kullanicidan aliyorum daha sonra bu sayiar� arrayima append ediyorum
	for(int i=0; i<3;i++){
		cout<<i+1<<" sayiyi giriniz: ";
		cin>>sayi;
		s[i]=sayi;
	}
	
	
	for(int i=0; i<3;i++){
		//eger arrayimin i. indeksindeki deger sayi degiskeniminden buyukse sayi degiskenimi update et
		if(s[i]>sayi){
			sayi=s[i];
		}
	}
	
	cout<<"en buyuk sayi: "<< sayi<<"'dur";
	return 0;
}
