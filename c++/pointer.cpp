#include <conio.h>
#include <iostream>
using namespace std;

int main( )
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    a=10;
    b=20;
    cout<<a<<endl;    //a say� degeri
    cout<<b<<endl;    //b say� degeri
    cout<<&a<<endl;   //a n�n bellekteki konumu
    cout<<&b<<endl;   //b nin bellekteki konumu
    cout<<p1<<endl;   //a n�n bellekteki konumu
    cout<<p2<<endl;   //b nin bellekteki konumu
	cout<<&p1<<endl;  //a say�s�n�n pointer ile konumunu tutan alan
	cout<<&p2<<endl;  //b say�s�n�n pointer ile konumunu tutan alan
    cout<<*p1<<endl;  //a say� degeri
    cout<<*p2<<endl;  //b say� degeri
    
  return 0;
}

