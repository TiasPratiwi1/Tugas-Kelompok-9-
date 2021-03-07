#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int p,l,t,volume;
	cout<<"Menghitung Volume Balok"<<endl;
	cout<<"======================="<<endl;
	cout<<"Masukkan Panjang = ";
	cin>>p;
	cout<<"Masukkan Lebar = ";
	cin>>l;
	cout<<"Masukkan Tinggi = ";
	cin>>t;
	
	volume = p*l*t;
	cout<<"======================="<<endl;
	cout<<"Volume Balok Adalah "<<volume;
	return 0;
}
