#include <iostream>
using namespace std;

int main(){
	//kullanicidan 3 tane sayi al en buyugunu ekrana yazdir ve bunlarý yaparken en az sayýda kod kullanmaya dikkat et.
	// girdiler 5 6 7 gibi yazilmalidir
	int s1,s2,s3,sonuc;
	cout<<"lutfen 3 sayi giriniz: ";
	cin>>s1>>s2>>s3;
	cout<<endl;
	
	if(s1>=s2 && s1>=s3){
		sonuc=s1;
	}
	else if(s2>s1 && s2>s3){
		sonuc=s2;
	}
	else{
		sonuc=s3;
	}

	cout<<"en buyuk sayi: "<< sonuc<<"dur"<<endl;
	return 0;
}
