#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float luas, phi = 3.14;
	int jari_jari;
	
	cout<<"Menghitung Luas Lingkaran"<<endl;
	cout<<"========================="<<endl;
	cout<<"Masukkan Jari-Jari = ";
	cin>>jari_jari;
	
	luas = phi*jari_jari*jari_jari;
	
	cout<<"Luas Lingkaran Adalah "<<luas<<endl;
	getch();
}
