#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Araba {
private:
    string marka;
    string model;
    int uretimYili;
    bool kiralandiMi;

public:
    Araba(string _marka, string _model, int _uretimYili)
        : marka(_marka), model(_model), uretimYili(_uretimYili), kiralandiMi(false) {}

    void bilgileriGoster() {
        cout << "Marka: " << marka << ", Model: " << model << ", uretim yili: " << uretimYili;
        if (kiralandiMi) {
            cout << " (Kiralik Degil)" << endl;
        } else {
            cout << " (Kiralik)" << endl;
        }
    }

    void kirala() {
        if (!kiralandiMi) {
            kiralandiMi = true;
            cout << marka << " " << model << " arabasi kiralandi." << endl;
        } else {
            cout << "uzgunuz, araba su anda kirada." << endl;
        }
    }

    void iadeEt() {
        if (kiralandiMi) {
            kiralandiMi = false;
            cout << marka << " " << model << " arabasi iade edildi. Tesekkur ederiz!" << endl;
        } else {
            cout << "Araba zaten kiralanmýs degil." << endl;
        }
    }

    bool isKiralandi() {
        return kiralandiMi;
    }
};

class KiralamaSistemi {
private:
    vector<Araba*> arabalar;

public:
    void arabaEkle(Araba& yeniAraba) {
        arabalar.push_back(&yeniAraba);
        cout << yeniAraba.isKiralandi() << " Araba eklendi: ";
        yeniAraba.bilgileriGoster();
    }

    void kiraliklariListele() {
	    cout << "Kiralik Arabalar:" << endl;
	    for (size_t i = 0; i < arabalar.size(); ++i) {
	        if (!arabalar[i]->isKiralandi()) {
	            arabalar[i]->bilgileriGoster();
	        }
    }
}
};

int main() {
    KiralamaSistemi kiralama;

    Araba araba1("Renault", "Clio", 2019);
    Araba araba2("Ford", "Focus", 2020);
    Araba araba3("Toyota", "Corolla", 2021);

    kiralama.arabaEkle(araba1);
    kiralama.arabaEkle(araba2);
    kiralama.arabaEkle(araba3);

    kiralama.kiraliklariListele();

    araba1.kirala();
    araba3.kirala();

    kiralama.kiraliklariListele();

    araba1.iadeEt();

    kiralama.kiraliklariListele();

    return 0;
}

