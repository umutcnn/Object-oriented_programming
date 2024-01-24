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
    cout<<a<<endl;    //a sayý degeri
    cout<<b<<endl;    //b sayý degeri
    cout<<&a<<endl;   //a nýn bellekteki konumu
    cout<<&b<<endl;   //b nin bellekteki konumu
    cout<<p1<<endl;   //a nýn bellekteki konumu
    cout<<p2<<endl;   //b nin bellekteki konumu
	cout<<&p1<<endl;  //a sayýsýnýn pointer ile konumunu tutan alan
	cout<<&p2<<endl;  //b sayýsýnýn pointer ile konumunu tutan alan
    cout<<*p1<<endl;  //a sayý degeri
    cout<<*p2<<endl;  //b sayý degeri
    
  return 0;
}

