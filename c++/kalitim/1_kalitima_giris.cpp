#include <iostream>
using namespace std;
class insan{
	protected:
		string tc;
		string isim;
		string soyisim;
	public:
		insan(string tc="",string isim="",string soyisim =""):tc(tc),isim(isim),soyisim(soyisim){}
		string getTc(){return tc;}
		string getIsim(){return isim;}
		string getSoyisim(){return soyisim;}
		void setTc(string tc){this->tc=tc;	}
		void setisim(string isim){this->isim=isim;}
		void setSoyisim(string soyisim){this->soyisim=soyisim;}
};

class ogrenci:public insan{
	private:
		string ogrenciNo;
	public: 
		ogrenci(string ogrenciNo="",string tc="",string isim="",string soyisim=""): ogrenciNo(ogrenciNo),insan(tc,isim,soyisim){}
		string getOgrenciNo(){return ogrenciNo;}
		void setOgrenciNo(string ogrenciNo){this->ogrenciNo=ogrenciNo;}	
		
};


int main(){
	insan umut("12345678911","umut","yildiz");
	cout<<umut.getTc()<<" "<<umut.getIsim()<<" "<<umut.getSoyisim()<<endl; 
	ogrenci ogr("123456","12345678910","can","yildiz");
	cout<<ogr.getTc()<<" "<<ogr.getIsim() <<" "<<ogr.getSoyisim()<<" "<<ogr.getOgrenciNo();
	return 0;
}
