#include <iostream>
using namespace std;
main()
{
	char nama[50];
	long nim;
	float uts, uas, rata;
	
	cout<<"Menghitung Nilai Rata-rata UTS dan UAS"<<endl<<endl;
	
	cout<<"Nama Mahasiswa	= "; cin.getline(nama,sizeof(nama));
	cout<<"NIM		= "; cin>>nim;
	cout<<"\nNilai UTS = "; cin>>uts;
	cout<<"Nilai UAS = "; cin>>uas;
	
	rata = (uts + uas)/2;
	
	cout<<"\nNilai rata-rata = "<<rata;
}
