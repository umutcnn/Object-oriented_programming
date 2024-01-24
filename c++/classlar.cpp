#include <iostream>
using namespace std;
/* 
private : Sadece sýnýf fonksiyonlarýnýn icinde erisebilmesini istedigimiz degiskenler private olarak tanimlanir 
public : Sýnýf fonksiyonlarý, türetilmiþ sýnýf fonksiyonlarý ve sýnýf nesneleri erþim saðlayabilir.
protected: Bu eriþim düzenleyici ile belirtilen üyeler, doðrudan sýnýf dýþýndan eriþilemez, ancak türetilmiþ sýnýflardan (alt sýnýflar) eriþilebilir.
 */


class Nokta{
	
	public:
	int x,y;
	void degerAta(int _x, int _y){
		x=_x;
		y=_y;
	}
	
	void ekranaYaz(){
		cout<<x<<" , "<<y<<endl;
	}
	
	bool baslanictaMi(){
		if( x== 0 && y == 0)
			return true;
		else
			return false;
	}
};

int main() {
	
	/* 
	n1 ve n2 adýnda 2 adet nesne olusturuyorum daha sonra bu nesnelere degerler atýyorum ve fonksiyonlarla belli baþlý iþlemler yaptýrýyorum
	*/
	Nokta n1;
	n1.degerAta(2,7);
	n1.ekranaYaz(); 
	
	Nokta n2;
	n2.degerAta(0,0);
	n2.ekranaYaz();
	
	if(n1.baslanictaMi())
		cout<<"n1 baslangic noktasinda";
	
	if(n2.baslanictaMi())
		cout<<"n2 Baslangic noktasinda"; 
		
	
	/* 
	Bir pointer olusturuyorum ve onunla daha once urettigim bir nesnenin yerini tutuyorum daha sonra onu yazdýrýyorum
	*/	
	Nokta* n3;
	n3 = &n2;
	cout<<"n3 pointer ile ekrana yazilan degerler ";
	n3->ekranaYaz();
	
	
	/* 
	Yeni bir pointer olusturuyorum ve ona daha once olusturdugum fonksiyonlarla degerler atayarak ekrana yazdýrýyorum
	*/
	Nokta* n4;
	n4 = new Nokta();
	n4->degerAta(100,200);
	n4->ekranaYaz();
	
	

	//Nokta classýný kullanarak bir adet dizi olusturuyorum
	Nokta array[10];
	//Nokta classýný kullanarak dinamik bir bellek oluþturuyorum
	Nokta* pArray;
	pArray = new Nokta[10];
	
	// Bir for dongusu olusturdum bu donguyle array ve pArray dizilerine degerler atýyorum
	for(int i=0;i<10;i++){
		// arraya i ve i+2 degerlerini atiyorum
		array[i].degerAta(i,i+2);
		
		// pArray a ise arrayda atadigim degerin i+5 ve i+10 fazlasýný atiyorum bu islemi pointer ile yaptigim icin . yerine -> kullanýyorum. 
		(pArray + sizeof(Nokta)* i )->degerAta(i+5,i+10);
	}
	
	
	//degerleri yazdiriyorum
	for(int i=0;i<10;i++){
		array[i].ekranaYaz();
		(pArray +  sizeof(Nokta)* i )->ekranaYaz();
		cout<<endl;
	}
	return 0;
}
