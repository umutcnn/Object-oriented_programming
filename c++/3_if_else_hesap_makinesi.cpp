#include <iostream>
using namespace std;

int main(){
	int s1,s2,islem, sonuc;
	cout<<"lutfen sayi1 giriniz: ";
	cin>>s1;
	
	cout<<"lutfen sayi2 giriniz: ";
	cin>>s2;
	
	secimTekrar:
	cout<<"lutfen (1:+, 2:-, 3:*, 4:/) olacak sekilde isleminizi seciniz : ";
	cin>>islem;
	
	if(islem == 1){
		sonuc = s1+s2;
	}
	else if(islem == 2){
		sonuc = s1-s2;
	}
	else if(islem == 3){
		sonuc = s1*s2;
	}
	else if(islem == 4){
		sonuc = s1/s2;
	}
	else{
		cout<<"lutfen gecerli bir sayi giriniz, bunun icin sizi yonlendiriyorum"<<endl;
		goto secimTekrar;
	}
	
	cout<<"sonuc: "<<sonuc<<endl;
}
