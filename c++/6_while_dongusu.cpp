#include <iostream>
using namespace std;

int main(){
	//kullanicidan bir sayi al daha sonra bu say� -1 olana kadar 1 er er azalarak o say�lar�n karesini bul.
	
	int s1;
	cout<<"lutfen sayiyi giriniz: ";
	cin>>s1;
	
	while(s1 != -1){
		int kare = s1 *s1;
		cout<<kare<<endl;;
		s1--;
	}
	return 0;
}
