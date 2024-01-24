#include <iostream>
#include<conio.h>
#include <stdlib.h>
using namespace std;

void terstenYazdir(int dizi[], int size){
	
		for(int a = size;a>=0;a--){
			cout<<"Dizinin "<<a+1<<". elemanini yazdirdim: ";
				cout<<dizi[a]<<endl;
		}
		
	}


void kareYazdir(int dizi[], int size){
	
		for(int a = size;a>=0;a--){
			cout<<"Dizinin "<<a+1<<". elemaninin karesini yazdirdim: ";
				dizi[a]*=dizi[a];
				cout<<dizi[a]<<endl;
		}
	}
	
	
void carpimTablosu(int dizi[], int size){
		int index;
		for(int a = 0;a<size+1;a++){
			cout<<"Dizinin "<<a+1<<". elemaninin "<<dizi[a]<<endl;
		}
		cout<<"carpim tablosunu cikartmak istedigin dizinin kacinci elemani? ";
		cin>>index;
		index-=1;
		for(int i=1;i<11;i++){
			cout<<i<<"x"<<dizi[index]<<"="<<i*dizi[index]<<endl;
		}
	}




void faktoriyel(int dizi[], int size){
	int index,i,sonuc=1;
	for(int a= size;a<size;a++){
		cout<<"Dizinin "<<a+1<<". elemaninin "<<dizi[a]<<endl;
	}
	cout<<"faktoriyelinin alinmasini istedigin sayi dizinin kacinci elemani? ";
	sec:
	cin>>index;
	index-=1;
	if(index<0 && index>size){
		cout<<"dizide boyle eleman yok lutfen daha dikkatli ol ";
		goto sec;
	}
	for(i=1;i<(dizi[index]);i++){
		sonuc=i*sonuc;
	}
		cout<<"faktoriyelinin alinmasini istedigin sayinin faktoriyeli "<<sonuc<<endl;;
}





void hesapMakinesi(int dizi[], int size){

	char secim;
	int c,v,toplam=0,cikarma=0,carpma=0,bolme=0;
	
	
	for(size=0;size<size;size++){
	cout<<"Dizinin "<<size+1<<". elemaninin "<<dizi[size]<<endl;
	}
	
	cout<<"sectigin 1. sayi dizinin kacinci elemani? "<<endl;
	cin>>c;
	c-=1;
	cout<<"sectigin 2. sayi dizinin kacinci elemani? "<<endl;
	cin>>v;
	v-=1;
	
	
	cout<<"Toplam     ==> 1 "<<endl;
	cout<<"Cikarma    ==> 2 "<<endl;
	cout<<"Carpim     ==> 3 "<<endl;
	cout<<"Bolme      ==> 4 "<<endl;
	cout<<"cikis      ==> 5 "<<endl;
	tekrarsectir:;
	cin>>secim;
	switch(secim){
		case '1':
			toplam=dizi[c]+dizi[v];
			cout<<"sectigin sayilarin toplami: "<<toplam<<endl;
			break;
		case '2':
			cikarma=dizi[c]-dizi[v];
			cout<<"sectigin sayilarin cikarmasi: "<<cikarma<<endl;
			break;
		case '3':
			carpma=dizi[c]*dizi[v];
			cout<<"sectigin sayilarin carpimi: "<<carpma<<endl;
			break;
		case '4':
			bolme=dizi[c]/dizi[v];
			cout<<"sectigin sayilarin bolmesi: "<<bolme<<endl;
			break;
		default:
			cout<<"Yanlis secim";
			goto tekrarsectir;
		case '5':
			
			break;
	}


}

void matrisOlustur(){
	int N;
	cout<<"Iki boyutlu kare matrisin boyutunu giriniz: ";
			cin>>N;
			int matris[N][N], random;
			
			for(int p=0; p<N; p++) {
				for(int q=0; q<N; q++) {
					random = rand()%20;
					matris[p][q]=random;
					cout<<matris[p][q]<<" ";
				}
			cout<<endl;
			}
}


void asiri_yukleme(int dizi[], int size){
	int index,indexx, i,sonuc=1;
	for(int a= size;a<size;a++){
		cout<<"Dizinin "<<a+1<<". elemaninin "<<dizi[a]<<endl;
	}
	cout<<"asiri yukleme yapmak istediðin 1. elemani sec ";
	sec:
	cin>>index;
	index-=1;
	if(index<0 && index>size){
		cout<<"dizide boyle eleman yok lutfen daha dikkatli ol ";
		goto sec;
	}
	
	
	cout<<"asiri yukleme yapmak istediðin 2. elemani sec ";
	sec:
	cin>>indexx;
	indexx-=1;
	if(index<0 && indexx>size){
		cout<<"dizide boyle eleman yok lutfen daha dikkatli ol ";
		goto sec;
	}
	
	sonuc = dizi[index]+ dizi[indexx];

    
    
		
}

void terstenYazdir(int dizi[], int size);



int main() {
	
	int uzunluk= 0;
	int deger;
	
	cout<<" hosgeldiniz islem yapmak dizinin uzunlugunu giriniz: ";
	cin>>uzunluk;
	
	int dizi[uzunluk];
	
	
	for(int i=0 ; i<uzunluk; i++){
		cout<<"dizinin "<< i+1<<". terimini giriniz: ";
		cin>>deger;
		dizi[i]=deger;
	}
	
	
	
	sectir:
	cout<<"Dizinin tersten yazdir                    ==> 1 "<<endl;
	cout<<"Dizinin elemanlarinin karesini yazdir     ==> 2 "<<endl;
	cout<<"Diziden secilenin carpim tablosunu yazdir ==> 3 "<<endl;
	cout<<"Hesap makinesi                            ==> 4 "<<endl;
	cout<<"Faktoriel                                 ==> 5 "<<endl;
	cout<<"Random matris olustur                     ==> 6 "<<endl;
	cout<<"asiri yukleme yap                         ==> 7 "<<endl;
	cout<<"cikis                                     ==> 8 "<<endl;
	char secim;
	
	cin>>secim;
	switch(secim){
		case '1':
			terstenYazdir(dizi,(uzunluk-1));
			goto sectir;
		case '2':
			kareYazdir(dizi,(uzunluk-1));
			goto sectir;
		case '3':
			carpimTablosu(dizi,(uzunluk-1));
			goto sectir;
		case '4':
			hesapMakinesi(dizi,(uzunluk-1));
			goto sectir;
		case '5':
			faktoriyel(dizi,(uzunluk-1));
			goto sectir;
		case '6':
			matrisOlustur();
			goto sectir;
		case '7':
			asiri_yukleme();
			break;
		case '8':
			
			break;
		default:
			cout<<"yanlis secim yaptiniz lutfen tekrar seciniz ";
			goto sectir;
	
	}
	
	return 0;
}
