#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <ctime>
#include <windows.h>
#include <conio.h>

#define YUKSEKLIK 10
#define GENISLIK 10

using namespace std;
// Konum yapýsý, x ve y koordinatlarýný içerir
struct Konum {
    int konum_x = 0; // x koordinatý
    int konum_y = 0; // y koordinatý
};

// Metaverse sýnýfý
class Metaverse {
private:
    Konum konum; // Konum bilgisini içeren bir Konum yapýsý
    string evren; // Karakterlerin bulunduðu evrenin adlarý
    string ad; // Karakterlerin adlarý
    int numara; // Karakter numaralarý
    float para, tc; // Karakterlerin paralarý ve TC numaralarý
    int su = 100; // Su seviyeleri (baþlangýç deðeri 100)
    int aclik = 100; // Açlýk seviyeleri (baþlangýç deðeri 100)

public:
    // Kurucu fonksiyon (constructor)
    void Metaverse_const(string evren, string ad, float tc, float para) {
        this->evren = evren; // Evren adlarýný atar
        this->ad = ad; // Karakter adlarýný atar
        this->tc = tc; // TC numaralarýný atar
        this->para = para; // Para miktarlarýný atar
    }

    // SET METODLARI: Deðer atama metotlarý
    void set_su(int su) { // Su seviyelerini ayarlar
        this->su = su;
    }
    void set_id(int id) { // Karakter numaralarýný ayarlar
        this->numara = id;
    }
    void set_evren(string evren) { // Evren adlarýný ayarlar
        this->evren = evren;
    }
    void set_ad(string ad) { // Karakter adlarýný ayarlar
        this->ad = ad;
    }
    void set_tc(float tc) { // TC numaralarýný ayarlar
        this->tc = tc;
    }
    void set_para(float para) { // Para miktarlarýný ayarlar
        this->para = para;
    }
    void set_aclik(int aclik) { // Açlýk seviyelerini ayarlar
        this->aclik = aclik;
    }

    // GET METODLARI: Deðer döndürme metotlarý
    int get_id() { // Karakter numaralarýný döndürür
        return this->numara;
    }
    int get_su() { // Su seviyelerini döndürür
        return this->su;
    }
    string get_evren() { // Evren adlarýný döndürür
        return this->evren;
    }
    string get_ad() { // Karakter adlarýný döndürür
        return this->ad;
    }
    float get_tc() { // TC numaralarýný döndürür
        return this->tc;
    }
    float get_para() { // Para miktarlarýný döndürür
        return this->para;
    }
    int get_aclik() { // Açlýk seviyelerini döndürür
        return this->aclik;
    }

    // Açlýk durumunu kontrol eden fonksiyon
    void acikma() {
        if ((this->aclik) > 10) { // Eðer açlýk seviyeleri 10'dan büyükse
            this->aclik = (this->aclik) - 10; // Açlýk seviyelerini 10 azaltýr
        }
        else { // Aksi durumda
            yemek(); // Yemek fonksiyonunu çaðýrýr
        }
    }

    // Susama durumunu kontrol eden fonksiyon
    void susama() {
        if ((this->su) > 10) { // Eðer su seviyeleri 10'dan büyükse
            this->su = (this->su) - 10; // Su seviyelerini 10 azaltýr
        }
        else { // Aksi durumda
            su_ic(); // Su içme fonksiyonunu çaðýrýr
        }
    }

    // Hareket fonksiyonu, karakterlerin hareketlerini kontrol eder
    void hareket(char hareket) {
        switch (hareket) {
            case 'w': { // Eðer hareket 'w' ise (yukarý gitme)
                cout << this->ad << " Bir Birim Yukarý Gitti" << endl; // Ekrana bilgi yazdýrýr
                this->konum.konum_y = (this->konum.konum_y) - 1; // Konum y koordinatýný bir azaltýr
                cout << this->ad << "'ýn Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazdýrýr
                acikma(); // Açlýk kontrol fonksiyonunu çaðýrýr
                susama(); // Susama kontrol fonksiyonunu çaðýrýr
                break;
            }
            case 's': { // Eðer hareket 's' ise (aþaðý gitme)
                cout << this->ad << " Bir Birim Aþaðýya Gitti" << endl; // Ekrana bilgi yazdýrýr
                this->konum.konum_y = (this->konum.konum_y) + 1; // Konum y koordinatýný bir artýrýr
                cout << this->ad << "'ýn Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazdýrýr
                acikma(); // Açlýk kontrol fonksiyonunu çaðýrýr
                susama(); // Susama kontrol fonksiyonunu çaðýrýr
                break;
            }
            case 'a': { // Eðer hareket 'a' ise (sola gitme)
                cout << this->ad << " Bir Birim Sola Gitti" << endl; // Ekrana bilgi yazdýrýr
                this->konum.konum_y = (this->konum.konum_x) - 1; // Konum x koordinatýný bir azaltýr
                cout << this->ad << "'ýn Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazdýrýr
                acikma(); // Açlýk kontrol fonksiyonunu çaðýrýr
                susama(); // Susama kontrol fonksiyonunu çaðýrýr
                break;
            }
            case 'd': { // Eðer hareket 'd' ise (saða gitme)
                cout << this->ad << " Bir Birim Saða Gitti" << endl; // Ekrana bilgi yazdýrýr
                this->konum.konum_y = (this->konum.konum_x) + 1; // Konum x koordinatýný bir artýrýr
                cout << this->ad << "'ýn Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazdýrýr
                acikma(); // Açlýk kontrol fonksiyonunu çaðýrýr
                susama(); // Susama kontrol fonksiyonunu çaðýrýr
                break;
            }
        }
		}
		void kiyaslaPara(Metaverse& karakter1, Metaverse& karakter2) {
		    float para1 = karakter1.get_para(); // Karakter 1'in parasýný al
		    float para2 = karakter2.get_para(); // Karakter 2'nin parasýný al
		
		    if (para1 > para2) { // Karakter 1 daha fazla para sahibi ise
		        cout << karakter1.get_ad() << " daha zengin." << endl;
		    } else if (para1 < para2) { // Karakter 2 daha fazla para sahibi ise
		        cout << karakter2.get_ad() << " daha zengin." << endl;
		    } else { // Eðer ikisi de ayný miktarda paraya sahipse
		        cout << "Ýkisi de ayný miktarda paraya sahip." << endl;
		    }
		}

		// Yemek yeme fonksiyonu
		void yemek() {
		    this->aclik = 100; // Açlýk durumunu sýfýrlar
		    cout << this->ad << " Yemek Yedi" << endl; // Ekrana karakterin yemek yediðini yazdýrýr
		}
		
		// Su içme fonksiyonu
		void su_ic() {
		    this->su = 100; // Susuzluk durumunu sýfýrlar
		    cout << this->ad << " Su Ýçti" << endl; // Ekrana karakterin su içtiðini yazdýrýr
		}
		
		// Para transferi fonksiyonu
		void gonder_para(Metaverse& alici, float miktar) {
		    if (this->evren != alici.evren) {
		        cout << "Bulunduðunuz Evrende Böyle Bir Karakter Bulunmamaktadýr" << endl; // Evrenlerin eþleþmediðini bildirir
		    }
		    else {
		        if (miktar <= this->para) {
		            alici.para = alici.para + miktar; // Alýcýya para ekler
		            this->para = this->para - miktar; // Kendi paramýzdan düþer
		        }
		        else {
		            cout << "Gönderecek Yeterli Paranýz Bulunmamaktadýr" << endl; // Yeterli para olmadýðýný bildirir
		        }
		    }
		}
};

// Uyku durumunu kontrol eden fonksiyon
void is_afk() {
    char yuz = 1;
    if (_kbhit() == 0) {
        cout << "Karakteriniz þuan uyuyor" << endl << yuz << endl;
        while (_kbhit() == 0) {

        }
        cout << "Karakteriniz uyandý" << endl;
    }
}

// Ana fonksiyon
int main() {
    setlocale(LC_ALL, "Turkish");
    srand(time(0));

    int getchar();
    int _kbhit(void);

    char hareket;
    int N, kar_id, kar_har, kar_al, kar_ode;
    string ad, evren;
    float para, tc;

    cout << "Oluþturmak Ýstediðiniz Karakter Sayýsýný Giriniz : ";
    cin >> N;
    cout << endl;
    Metaverse array[N];

    // Karakterlerin oluþturulmasý
    for (int i = 0; i <= N - 1; i++) {
        cout << "Oluþturmak Ýstediðiniz Karakterin Bulunduðu Evreni Giriniz : ";
        cin >> evren;
        cout << "Oluþturmak Ýstediðiniz Karakterin Adýný Giriniz : ";
        cin >> ad;
        cout << "Oluþturmak Ýstediðiniz Karakterin tcsini Giriniz : ";
        cin >> tc;
        cout << "Oluþturmak Ýstediðiniz Karakterin Baþlangýç Parasýný Giriniz : ";
        cin >> para;
        array[i].Metaverse_const(evren, ad, tc, para);
        array[i].set_id(i);
        cout << endl << endl;
    }
	
	char devam = 'e';

	while (devam != 'q') {
	    // ... (Kodun geri kalan kýsmý)
	
	    cout << "Ýþlem Seçiniz: \n";
	    cout << "1. Para Transferi\n";
	    cout << "2. Hareket Etme\n";
	    cout << "3. Güç Kýyaslanmasý\n";
	    cout << "4. Çýkýþ\n";
	
	    int secim;
	    cout << "Seçiminizi yapýnýz: ";
	    cin >> secim;
	
	    switch (secim) {
	        case 1: {
	            cout << "Para Transfer Etmek Ýstediðiniz Karakterin index Numarasýný Giriniz: ";
	            cin >> kar_al;
	            cout << endl;
	
	            cout << "Para Transferini Gerçekleþtirecek Karakterin index Numarasýný Giriniz: ";
	            cin >> kar_ode;
	            cout << endl;
	
	            cout << "Transfer Etmek Ýstediðiniz Miktarý Giriniz: ";
	            cin >> para;
	            cout << endl;
	
	            array[kar_ode].gonder_para(array[kar_al], para);
	
	            cout << array[kar_ode].get_ad() << " Kalan Para: " << array[kar_ode].get_para() << endl;
	            cout << array[kar_al].get_ad() << " Kalan Para: " << array[kar_al].get_para() << endl;
	            break;
	        }
	        case 2: {
			    // Hareket iþlemleri
			    cout << "Hareket Ettirmek Ýstediðiniz Karakterin Ýndex Numarasýný Giriniz : ";
			    cin >> kar_id;
			    cout << endl;
			
			    cout << "Karakterinizi Kaç Kere Hareket Ettirmek Ýstiyorsunuz : ";
			    cin >> kar_har;
			    cout << endl;
			
			    cout << "Yukarý Gitmek Ýçin W, Aþaðý Gitmek Ýçin S, Saða Gitmek Ýçin D ve Sola Gitmek Ýçin A Tuþlayýnýz (CapsLock Tuþunun Kapalý Olmasýna Dikkat Ediniz)" << endl;
			    is_afk();
			    for(int i=0;i<=kar_har;i++){
					hareket=getchar();
					array[kar_id].hareket(hareket);	
				}
				system("pause");

	        }
	        
	        case 3: {
	            cout << "Güç kýyaslamasý yapmak istediðin karakterin indexini gir:   ";
	            cin >> kar_al;
	            cout << endl;
	
	            cout << "Güç kýyaslamasý yapmak istediðin karakterin indexini gir:   ";
	            cin >> kar_ode;
	            cout << endl;
	            array[kar_al].kiyaslaPara(array[kar_al], array[kar_ode]);
	            
	            break;
	        }
	        
	        case 4: {
	            cout << "Programdan çýkýlýyor..." << endl;
	            devam = 'q';
	            break;
	        }
	        
	       
	        default: {
	            cout << "Geçersiz seçim!" << endl;
	            break;
	        }
	        
	    }
	}
	
    // Karakterin hareketi
    for (int i = 0; i <= kar_har; i++) {
        hareket = getchar();
        array[kar_id].hareket(hareket);
    }

    system("pause");
    return 0;
}

