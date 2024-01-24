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
// Konum yap�s�, x ve y koordinatlar�n� i�erir
struct Konum {
    int konum_x = 0; // x koordinat�
    int konum_y = 0; // y koordinat�
};

// Metaverse s�n�f�
class Metaverse {
private:
    Konum konum; // Konum bilgisini i�eren bir Konum yap�s�
    string evren; // Karakterlerin bulundu�u evrenin adlar�
    string ad; // Karakterlerin adlar�
    int numara; // Karakter numaralar�
    float para, tc; // Karakterlerin paralar� ve TC numaralar�
    int su = 100; // Su seviyeleri (ba�lang�� de�eri 100)
    int aclik = 100; // A�l�k seviyeleri (ba�lang�� de�eri 100)

public:
    // Kurucu fonksiyon (constructor)
    void Metaverse_const(string evren, string ad, float tc, float para) {
        this->evren = evren; // Evren adlar�n� atar
        this->ad = ad; // Karakter adlar�n� atar
        this->tc = tc; // TC numaralar�n� atar
        this->para = para; // Para miktarlar�n� atar
    }

    // SET METODLARI: De�er atama metotlar�
    void set_su(int su) { // Su seviyelerini ayarlar
        this->su = su;
    }
    void set_id(int id) { // Karakter numaralar�n� ayarlar
        this->numara = id;
    }
    void set_evren(string evren) { // Evren adlar�n� ayarlar
        this->evren = evren;
    }
    void set_ad(string ad) { // Karakter adlar�n� ayarlar
        this->ad = ad;
    }
    void set_tc(float tc) { // TC numaralar�n� ayarlar
        this->tc = tc;
    }
    void set_para(float para) { // Para miktarlar�n� ayarlar
        this->para = para;
    }
    void set_aclik(int aclik) { // A�l�k seviyelerini ayarlar
        this->aclik = aclik;
    }

    // GET METODLARI: De�er d�nd�rme metotlar�
    int get_id() { // Karakter numaralar�n� d�nd�r�r
        return this->numara;
    }
    int get_su() { // Su seviyelerini d�nd�r�r
        return this->su;
    }
    string get_evren() { // Evren adlar�n� d�nd�r�r
        return this->evren;
    }
    string get_ad() { // Karakter adlar�n� d�nd�r�r
        return this->ad;
    }
    float get_tc() { // TC numaralar�n� d�nd�r�r
        return this->tc;
    }
    float get_para() { // Para miktarlar�n� d�nd�r�r
        return this->para;
    }
    int get_aclik() { // A�l�k seviyelerini d�nd�r�r
        return this->aclik;
    }

    // A�l�k durumunu kontrol eden fonksiyon
    void acikma() {
        if ((this->aclik) > 10) { // E�er a�l�k seviyeleri 10'dan b�y�kse
            this->aclik = (this->aclik) - 10; // A�l�k seviyelerini 10 azalt�r
        }
        else { // Aksi durumda
            yemek(); // Yemek fonksiyonunu �a��r�r
        }
    }

    // Susama durumunu kontrol eden fonksiyon
    void susama() {
        if ((this->su) > 10) { // E�er su seviyeleri 10'dan b�y�kse
            this->su = (this->su) - 10; // Su seviyelerini 10 azalt�r
        }
        else { // Aksi durumda
            su_ic(); // Su i�me fonksiyonunu �a��r�r
        }
    }

    // Hareket fonksiyonu, karakterlerin hareketlerini kontrol eder
    void hareket(char hareket) {
        switch (hareket) {
            case 'w': { // E�er hareket 'w' ise (yukar� gitme)
                cout << this->ad << " Bir Birim Yukar� Gitti" << endl; // Ekrana bilgi yazd�r�r
                this->konum.konum_y = (this->konum.konum_y) - 1; // Konum y koordinat�n� bir azalt�r
                cout << this->ad << "'�n Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazd�r�r
                acikma(); // A�l�k kontrol fonksiyonunu �a��r�r
                susama(); // Susama kontrol fonksiyonunu �a��r�r
                break;
            }
            case 's': { // E�er hareket 's' ise (a�a�� gitme)
                cout << this->ad << " Bir Birim A�a��ya Gitti" << endl; // Ekrana bilgi yazd�r�r
                this->konum.konum_y = (this->konum.konum_y) + 1; // Konum y koordinat�n� bir art�r�r
                cout << this->ad << "'�n Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazd�r�r
                acikma(); // A�l�k kontrol fonksiyonunu �a��r�r
                susama(); // Susama kontrol fonksiyonunu �a��r�r
                break;
            }
            case 'a': { // E�er hareket 'a' ise (sola gitme)
                cout << this->ad << " Bir Birim Sola Gitti" << endl; // Ekrana bilgi yazd�r�r
                this->konum.konum_y = (this->konum.konum_x) - 1; // Konum x koordinat�n� bir azalt�r
                cout << this->ad << "'�n Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazd�r�r
                acikma(); // A�l�k kontrol fonksiyonunu �a��r�r
                susama(); // Susama kontrol fonksiyonunu �a��r�r
                break;
            }
            case 'd': { // E�er hareket 'd' ise (sa�a gitme)
                cout << this->ad << " Bir Birim Sa�a Gitti" << endl; // Ekrana bilgi yazd�r�r
                this->konum.konum_y = (this->konum.konum_x) + 1; // Konum x koordinat�n� bir art�r�r
                cout << this->ad << "'�n Konumu: (" << this->konum.konum_x << "," << this->konum.konum_y << ")" << endl; // Yeni konumu ekrana yazd�r�r
                acikma(); // A�l�k kontrol fonksiyonunu �a��r�r
                susama(); // Susama kontrol fonksiyonunu �a��r�r
                break;
            }
        }
		}
		void kiyaslaPara(Metaverse& karakter1, Metaverse& karakter2) {
		    float para1 = karakter1.get_para(); // Karakter 1'in paras�n� al
		    float para2 = karakter2.get_para(); // Karakter 2'nin paras�n� al
		
		    if (para1 > para2) { // Karakter 1 daha fazla para sahibi ise
		        cout << karakter1.get_ad() << " daha zengin." << endl;
		    } else if (para1 < para2) { // Karakter 2 daha fazla para sahibi ise
		        cout << karakter2.get_ad() << " daha zengin." << endl;
		    } else { // E�er ikisi de ayn� miktarda paraya sahipse
		        cout << "�kisi de ayn� miktarda paraya sahip." << endl;
		    }
		}

		// Yemek yeme fonksiyonu
		void yemek() {
		    this->aclik = 100; // A�l�k durumunu s�f�rlar
		    cout << this->ad << " Yemek Yedi" << endl; // Ekrana karakterin yemek yedi�ini yazd�r�r
		}
		
		// Su i�me fonksiyonu
		void su_ic() {
		    this->su = 100; // Susuzluk durumunu s�f�rlar
		    cout << this->ad << " Su ��ti" << endl; // Ekrana karakterin su i�ti�ini yazd�r�r
		}
		
		// Para transferi fonksiyonu
		void gonder_para(Metaverse& alici, float miktar) {
		    if (this->evren != alici.evren) {
		        cout << "Bulundu�unuz Evrende B�yle Bir Karakter Bulunmamaktad�r" << endl; // Evrenlerin e�le�medi�ini bildirir
		    }
		    else {
		        if (miktar <= this->para) {
		            alici.para = alici.para + miktar; // Al�c�ya para ekler
		            this->para = this->para - miktar; // Kendi param�zdan d��er
		        }
		        else {
		            cout << "G�nderecek Yeterli Paran�z Bulunmamaktad�r" << endl; // Yeterli para olmad���n� bildirir
		        }
		    }
		}
};

// Uyku durumunu kontrol eden fonksiyon
void is_afk() {
    char yuz = 1;
    if (_kbhit() == 0) {
        cout << "Karakteriniz �uan uyuyor" << endl << yuz << endl;
        while (_kbhit() == 0) {

        }
        cout << "Karakteriniz uyand�" << endl;
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

    cout << "Olu�turmak �stedi�iniz Karakter Say�s�n� Giriniz : ";
    cin >> N;
    cout << endl;
    Metaverse array[N];

    // Karakterlerin olu�turulmas�
    for (int i = 0; i <= N - 1; i++) {
        cout << "Olu�turmak �stedi�iniz Karakterin Bulundu�u Evreni Giriniz : ";
        cin >> evren;
        cout << "Olu�turmak �stedi�iniz Karakterin Ad�n� Giriniz : ";
        cin >> ad;
        cout << "Olu�turmak �stedi�iniz Karakterin tcsini Giriniz : ";
        cin >> tc;
        cout << "Olu�turmak �stedi�iniz Karakterin Ba�lang�� Paras�n� Giriniz : ";
        cin >> para;
        array[i].Metaverse_const(evren, ad, tc, para);
        array[i].set_id(i);
        cout << endl << endl;
    }
	
	char devam = 'e';

	while (devam != 'q') {
	    // ... (Kodun geri kalan k�sm�)
	
	    cout << "��lem Se�iniz: \n";
	    cout << "1. Para Transferi\n";
	    cout << "2. Hareket Etme\n";
	    cout << "3. G�� K�yaslanmas�\n";
	    cout << "4. ��k��\n";
	
	    int secim;
	    cout << "Se�iminizi yap�n�z: ";
	    cin >> secim;
	
	    switch (secim) {
	        case 1: {
	            cout << "Para Transfer Etmek �stedi�iniz Karakterin index Numaras�n� Giriniz: ";
	            cin >> kar_al;
	            cout << endl;
	
	            cout << "Para Transferini Ger�ekle�tirecek Karakterin index Numaras�n� Giriniz: ";
	            cin >> kar_ode;
	            cout << endl;
	
	            cout << "Transfer Etmek �stedi�iniz Miktar� Giriniz: ";
	            cin >> para;
	            cout << endl;
	
	            array[kar_ode].gonder_para(array[kar_al], para);
	
	            cout << array[kar_ode].get_ad() << " Kalan Para: " << array[kar_ode].get_para() << endl;
	            cout << array[kar_al].get_ad() << " Kalan Para: " << array[kar_al].get_para() << endl;
	            break;
	        }
	        case 2: {
			    // Hareket i�lemleri
			    cout << "Hareket Ettirmek �stedi�iniz Karakterin �ndex Numaras�n� Giriniz : ";
			    cin >> kar_id;
			    cout << endl;
			
			    cout << "Karakterinizi Ka� Kere Hareket Ettirmek �stiyorsunuz : ";
			    cin >> kar_har;
			    cout << endl;
			
			    cout << "Yukar� Gitmek ��in W, A�a�� Gitmek ��in S, Sa�a Gitmek ��in D ve Sola Gitmek ��in A Tu�lay�n�z (CapsLock Tu�unun Kapal� Olmas�na Dikkat Ediniz)" << endl;
			    is_afk();
			    for(int i=0;i<=kar_har;i++){
					hareket=getchar();
					array[kar_id].hareket(hareket);	
				}
				system("pause");

	        }
	        
	        case 3: {
	            cout << "G�� k�yaslamas� yapmak istedi�in karakterin indexini gir:   ";
	            cin >> kar_al;
	            cout << endl;
	
	            cout << "G�� k�yaslamas� yapmak istedi�in karakterin indexini gir:   ";
	            cin >> kar_ode;
	            cout << endl;
	            array[kar_al].kiyaslaPara(array[kar_al], array[kar_ode]);
	            
	            break;
	        }
	        
	        case 4: {
	            cout << "Programdan ��k�l�yor..." << endl;
	            devam = 'q';
	            break;
	        }
	        
	       
	        default: {
	            cout << "Ge�ersiz se�im!" << endl;
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

