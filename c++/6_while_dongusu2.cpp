#include <iostream>
using namespace std;

int main(){
	//1 den kullanicinin girdigi sayiya kadar 7'nin katlarýný ekrana yazdýr
	
	int index = 1, s1;
	cout<<"lutfen sayiyi giriniz: ";
	cin>>s1;
	
	while(index<=s1){
		if(index %7 == 0){
			cout<<index<<" ";
		}
		index++;
	}
	return 0;
}
