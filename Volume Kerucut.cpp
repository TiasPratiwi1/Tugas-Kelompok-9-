#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	float r, t, volume;
	cout<<"Menghitung Volume Kerucut"<<endl;
	cout<<"========================="<<endl;
	cout<<"Masukkan Jari-Jari = ";
	cin>>r;
	cout<<"Masukkan Tinggi = ";
	cin>>t;
	
	volume = (3.14*r*r*t)/3;
	cout<<"========================="<<endl;
	cout<<"Volume Kerucut Adalah "<<volume;
	return 0;
}
