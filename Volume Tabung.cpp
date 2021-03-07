#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int r, t, volume;
	cout<<"Menghitung Volume Tabung"<<endl;
	cout<<"========================"<<endl;
	cout<<"Masukkan Jari-Jari = ";
	cin>>r;
	cout<<"Masukkan Tinggi = ";
	cin>>t;
	
	volume=22*r*r*r/7;
	cout<<"========================"<<endl;
	cout<<"Volume Tabung Adalah "<<volume;
	return 0;
}
