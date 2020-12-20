#include <iostream>
using namespace std;

main()
{
	int pilih, x, y, nim, kode, kuis, responsi, tugas, project, ronde, hasil1, hasil2, poin1 = 0, poin2 = 0;
	float rata;
	char  nilai, nama[10], player1[10], player2[10];	
	string jurusan,  main1, main2;
	
	cout<<"KUISSS ================"<<endl;
	cout<<"1. Deret Unik"<<endl;
	cout<<"2. Nilai Akhir"<<endl;
	cout<<"3. Gunting Batu Kertas (Bonus)"<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"Pilih: "; cin>>pilih;
	
	switch (pilih) {
		case 1 : 
			cout<<"X : "; cin>>x;
			cout<<"Y : "; cin>>y;
			cout<<endl;
			for (int i=1; i<=y;i++)	{
				if (i%x == 0){
					cout<<"|";
				} else { 
					cout<<"-";
				}
			}
			break;
			
		case 2 : 
			cout<<"\nInput Nilai Praktikum ========="<<endl;
			cout<<"Nama         : "; cin>>nama;
			cout<<"NIM          : "; cin>>nim;
			cout<<"Kuis         : "; cin>>kuis;
			cout<<"Responsi     : "; cin>>responsi;
			cout<<"Tugas        : "; cin>>tugas;
			cout<<"Project      : "; cin>>project;
			
			kode = nim/1000000;
			if (kode == 121) {
				jurusan = "Teknik Kimia";
			} else if (kode == 122){
				jurusan = "Teknik Industri";
			} else if (kode == 123) {
				jurusan = "Informatika";
			} else if (kode == 124) {
				jurusan = "Sistem Informasi";
			} else {
				jurusan = "Salah Jurusan";
			}
	
			rata = (kuis*0.2)+(responsi*0.35)+(tugas*0.15)+(project*0.3);
			
			if (rata>=80 && rata<=100){
				nilai = 'A';
			} else if (rata>=60) {
				nilai = 'B';
			} else if (rata>=40) {
				nilai = 'C';
			} else if (rata>=20) {
				nilai = 'D';
			} else {
				nilai = 'E';
			}
			
			cout<<"\nHasil Akhir ==================="<<endl;
			cout<<"Nama         : "<<nama<<endl;
			cout<<"NIM          : "<<nim<<endl;
			cout<<"Jurusan      : "<<jurusan<<endl;
			cout<<"Rata-rata    : "<<rata<<endl; 
			cout<<"Nilai Huruf  : "<<nilai<<endl; 
			if (rata>=60){
				cout<<"Selamat anda lulus praktikum";
			} else {
				cout<<"Mohon maaf anda belum lulus praktikum";
			}
			break;
			
		case 3 : 
			int j;
		 	cout<<"Masukkan nama player 1 : "; cin>>player1;
			cout<<"Masukkan nama player 2 : "; cin>>player2;
			cout<<"Masukkan banyak ronde  : "; cin>>ronde;
			for (j=1; j<=ronde; j++){
				cout<<"\nRonde ke-"<<j<<endl;
				cout<<"Masukkan kertas/gunting/batu "<<player1<<" : "; cin>>main1;
				cout<<"Masukkan kertas/gunting/batu "<<player2<<" : "; cin>>main2;
				if (main1 == "kertas"){
					if (main2 == "kertas"){
						hasil1 = 0;
						hasil2 = 0;
					} else if (main2 == "gunting") {
						hasil1 = 0;
						hasil2 = 1;
					} else if (main2 == "batu") {
						hasil1 = 1;
						hasil2 = 0;
					} else {
						hasil1 = 0;
						hasil2 = 0;
					}
				}
				else if (main1 == "gunting") {
					if (main2 == "kertas"){
						hasil1 = 1;
						hasil2 = 0;
					} else if (main2 == "gunting") {
						hasil1 = 0;
						hasil2 = 0;
					} else if (main2 == "batu") {
						hasil1 = 0;
						hasil2 = 1;
					} else {
						hasil1 = 0;
						hasil2 = 0;
					}
				} else if (main1 == "batu") {
					if (main2 == "kertas"){
						hasil1 = 0;
						hasil2 = 1;
					} else if (main2 == "gunting") {
						hasil1 = 1;
						hasil2 = 0;
					} else if (main2 == "batu") {
						hasil1 = 0;
						hasil2 = 0;
					} else {
						hasil1 = 0;
						hasil2 = 0;
					}
				}
				poin1 += hasil1;
				poin2 += hasil2;
			}
			
			cout<<"\n_____Hasil Akhir_____"<<endl;
			cout<<player1<<" menang "<<poin1<<" kali"<<endl;
			cout<<player2<<" menang "<<poin2<<" kali"<<endl;
			if (poin1 > poin2) {
				cout<<"Jadi pemenangnya adalah "<<player1;
			} else if (poin1 == poin2) {
				cout<<"Pertandingan seri";
			} else {
				cout<<"Jadi pemenangnya adalah "<<player2;
			}
			break;
			
		case 4 : 
			getc(0);
			break;
				
		default : 
			cout<<"Mohon maaf anda salah input";
		
	}
}

