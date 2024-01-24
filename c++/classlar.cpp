#include <iostream>
using namespace std;
/* 
private : Sadece s�n�f fonksiyonlar�n�n icinde erisebilmesini istedigimiz degiskenler private olarak tanimlanir 
public : S�n�f fonksiyonlar�, t�retilmi� s�n�f fonksiyonlar� ve s�n�f nesneleri er�im sa�layabilir.
protected: Bu eri�im d�zenleyici ile belirtilen �yeler, do�rudan s�n�f d���ndan eri�ilemez, ancak t�retilmi� s�n�flardan (alt s�n�flar) eri�ilebilir.
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
	n1 ve n2 ad�nda 2 adet nesne olusturuyorum daha sonra bu nesnelere degerler at�yorum ve fonksiyonlarla belli ba�l� i�lemler yapt�r�yorum
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
	Bir pointer olusturuyorum ve onunla daha once urettigim bir nesnenin yerini tutuyorum daha sonra onu yazd�r�yorum
	*/	
	Nokta* n3;
	n3 = &n2;
	cout<<"n3 pointer ile ekrana yazilan degerler ";
	n3->ekranaYaz();
	
	
	/* 
	Yeni bir pointer olusturuyorum ve ona daha once olusturdugum fonksiyonlarla degerler atayarak ekrana yazd�r�yorum
	*/
	Nokta* n4;
	n4 = new Nokta();
	n4->degerAta(100,200);
	n4->ekranaYaz();
	
	

	//Nokta class�n� kullanarak bir adet dizi olusturuyorum
	Nokta array[10];
	//Nokta class�n� kullanarak dinamik bir bellek olu�turuyorum
	Nokta* pArray;
	pArray = new Nokta[10];
	
	// Bir for dongusu olusturdum bu donguyle array ve pArray dizilerine degerler at�yorum
	for(int i=0;i<10;i++){
		// arraya i ve i+2 degerlerini atiyorum
		array[i].degerAta(i,i+2);
		
		// pArray a ise arrayda atadigim degerin i+5 ve i+10 fazlas�n� atiyorum bu islemi pointer ile yaptigim icin . yerine -> kullan�yorum. 
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
