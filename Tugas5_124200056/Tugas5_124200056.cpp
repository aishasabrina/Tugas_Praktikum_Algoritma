#include <iostream>
using namespace std; 

main()
{
	int opsi;
	
	cout<<"Program Gambar Bangun Datar"<<endl;
	cout<<"==========================="<<endl;
	cout<<"\n1. Kotak Bolong\n2. Segitiga"<<endl;
	cout<<"Pilih = "; cin>>opsi;
	
	switch (opsi) {
		case 1 :
			int panjang, lebar, a, b;
			
			cout<<"\nMasukkan panjang = "; cin>>panjang;
			cout<<"Masukkan lebar = "; cin>>lebar;
			cout<<endl;
			for (a=1; a<=lebar; a++){
				for( b=1; b<=panjang;  b++){
					if (a>1 && a<lebar && b>1 && b<panjang){
							cout<<"  ";	
					}
					else{
						cout<<"* ";
					}
				} cout<<endl;
			}
			break;
			
		case 2 : 
			int tinggi, c, i, j;
			
			cout<< "\nMasukkan tinggi = "; cin>>tinggi;
			cout<<"\n";
				for (i=1;i<=tinggi;i++) {
					c = i;
					for (j=1;j<=i;j++) {
						cout <<c<<" ";
						c=c+tinggi-j;
					}
					cout << endl;
				}
			break;
		
		default : 
			cout<<"\nMaaf, input salah!";
		
		
	}
}
