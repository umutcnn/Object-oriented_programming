#include <iostream>
using namespace std;

int main(){
	//1 den kullanicinin girdigi sayiya kadar 7'nin katlarýný ekrana yazdýr
	
	int faktoriyel = 1, s1;
	cout<<"lutfen faktoriyelini bulmami istediginiz sayiyi giriniz: ";
	cin>>s1;
	
	for(int i = 1 ; i<=s1; i++){
		faktoriyel*=i;
	}
	cout<<"girdiginiz sayinin faktoriyeli " <<faktoriyel;
	return 0;
}
