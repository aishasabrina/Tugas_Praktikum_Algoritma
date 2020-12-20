#include <iostream>

using namespace std;


float hitung_luas(float r); 
float hitung_keliling(float r); 
void hitung_volume(float r, float t);

float phi=3.14;

main()
{
	int pilih;
	float jari,tinggi; 
	char ulang;
	cout<<"Hitung Lingkaran ========== \n1. Luas Lingkaran \n2. Keliling Lingkaran \n3. Volume Tabung"<<endl;
	cout<<"Pilih: "; cin>>pilih;
	
	switch (pilih){
		case 1:
			cout<<"Jari-jari	: "; cin>>jari;
			cout<<"Luas Lingkaran adalah "<<hitung_luas(jari);
			cout<<endl;
			break;
		case 2:
			cout<<"Jari-jari	: "; cin>>jari;
			cout<<"Keliling Lingkaran adalah "<<hitung_keliling(jari);
			cout<<endl;
			break;
		case 3:
			hitung_volume(jari,tinggi);
			cout<<endl;
			break;
		default:
			cout<<"Input Salah :)"<<endl;
	}
	
	cout<<"Ulangi program? (y/n) "; cin>>ulang;
	cout<<endl;
	if (ulang=='y'||ulang=='Y'){
		main();
	} else {
		cout<<"Program selesai, Terima kasih :)"<<endl;
	}
	
}

float hitung_luas(float r){
	float luas;
	luas = phi * r * r;
	return luas;
}
	
float hitung_keliling(float r){
	float keliling;
	keliling = 2 * phi * r;
	return keliling;
}

void hitung_volume(float r, float t){
	float volume; 
	cout<<"Jari-jari	: "; cin>>r;
	cout<<"Tinggi		: "; cin>>t;
	volume = hitung_luas(r) * t;
	cout<<"Volume Tabung adalah "<<volume;
}





















