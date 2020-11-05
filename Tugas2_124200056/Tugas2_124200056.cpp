#include <iostream>
using namespace std;
main()
{
	int Uayah, Uibu, Uanak1, Uanak2, Bayah, Bibu, Banak1, Banak2, jumlah;
	
	cout<<"Biaya Pemerintah untuk Korban Gempa Bumi"<<endl<<endl;
	cout<<"Masukkan usia ayah	: "; cin>>Uayah;
	cout<<"Masukkan usia ibu	: "; cin>>Uibu;
	cout<<"Masukkan usia anak pertama	: "; cin>>Uanak1;
	cout<<"Masukkan usia anak kedua	: "; cin>>Uanak2;
	
	if (Uayah<=12 ) {
		Bayah = 15000*30;
	} else if ( Uayah>12 && Uayah<=20 ) {
		Bayah = 20000*30;
	} else {
		Bayah = 30000*30;
	}
	
	if (Uibu <= 12 ) {
		Bibu = 15000*30;
	} else if ( Uibu>12 && Uibu<=20 ) {
		Bibu = 20000*30;
	} else {
		Bibu = 30000*30;
	}
	
	if (Uanak1<=12 ) {
		Banak1 = 15000*30;
	} else if (Uanak1>12 && Uanak1<=20) {
		Banak1 = 20000*30;
	} else {
		Banak1 = 30000*30;
	}
	
	if (Uanak2<=12) {
		Banak2 = 15000*30;
	} else if (Uanak2>12 && Uanak2<=20) {
		Banak2 = 20000*30;
	} else {
		Banak2 = 30000*30;
	}
	
	jumlah = Bayah+Bibu+Banak1+Banak2;
	cout<<"\nJumlah biaya yang akan diterima selama satu bulan adalah "<<jumlah;
	
		
}

