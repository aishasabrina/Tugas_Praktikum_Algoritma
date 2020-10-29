#include <iostream>

using namespace std;

main()
{
	string username, password, MK;
	int pilihan, nharian, uts, uas;
	float nilai;
	
	cout<<"Login Akun"<<endl;
	cout<<"Username = "; cin>>username;
	cout<<"Password = "; cin>>password;
	cout<<"-------------------------"<<endl<<endl;
	
	if (username == "mahasiswa"){
		if (password == "nim"){
			cout<<"Login berhasil!"<<endl<<endl;
			cout<<"Input Nilai Mata Kuliah"<<endl;
			cout<<"1. Algoritma dan Pemrograman"<<endl;
			cout<<"2. Kalkulus"<<endl;
			cout<<"\nPilih Mata Kuliah = "; cin>>pilihan;
			switch (pilihan) {
				case 1 : 
					MK = "Algoritma dan Pemrograman";
					break;
				case 2 : 
					MK = "Kalkulus";
					break;
				default : 
					cout<<"\nMaaf! Input Anda salah!"; exit(0);
			}
			cout<<"Masukkan Nilai Mata Kuliah "<<MK<<endl;
			cout<<"Nilai Harian	= "; cin>>nharian;
			cout<<"Nilai UTS	= "; cin>>uts;
			cout<<"Nilai UAS	= "; cin>>uas;
			nilai=(nharian+uts+uas)/3;
			if (nilai>=80) 
				cout<<"\nSelamat! Anda lulus mata kuliah "<<MK<<" dengan nilai "<<nilai;
			else 
				cout<<"\nAnda tidak lulus mata kuliah "<<MK<<" dengan nilai "<<nilai;
					
		} else {
			cout<<"Maaf! Password Anda salah!"<<endl;
		}
	} else {
		if (password == "nim") {
			cout<<"Maaf! Username Anda salah!"<<endl;
		} else {
			cout<<"Maaf! Username dan password Anda salah!"<<endl;
		}
	}
	
}
