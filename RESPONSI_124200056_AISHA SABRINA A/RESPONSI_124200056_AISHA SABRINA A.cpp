#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//TINGGAL BIKIN BIAR INPUTAN STRING BISA PAKE SPASI
char upd;
int pilih, i, ini;
int menuke=0, a=0, menu=0;
int bBahan[100], banyak[20], total[100], jml[100][20], harga[100][20];
string nmMenu[100], nmBahan[100][20], cari;
bool ketemu=false;


void login ();
void tambah ();
void lihat ();
void search ();
void update ();

main()
{
	logout :
	login();
		
	menu :
	system("cls");
	cout<<"Menu \n1. Tambah Makanan \n2. Lihat Makanan \n3. Cari Makanan \n4. Logout"<<endl;
	cout<<"Pilih : "; cin>>pilih;
	switch (pilih){
		case 1 : 
			tambah();
			system("cls");
			goto menu;
			break;
			
		case 2 :
			lihat();
			system("cls");
			goto menu;
			break;
			
		case 3 :
			search();
			system("cls");
			goto menu;
			break;
		case 4 :
			system("cls");
			goto logout;
			break;
		default: 
			cout<<"Salah Input"<<endl;
			system("pause");
			goto menu;				
	}		
}


void login (){
	string uname, pass;
	
	do {
	cout<<"Login Admin"<<endl;
	cout<<"Username : "; cin>>uname;
	cout<<"Password : "; cin>>pass;
	if (uname == "admin"){
		if (pass == "admin123"){
			cout<<"Login sukses"<<endl;
		} else {
			cout<<"Password salah"<<endl;
		}
	} else {
		if (pass == "admin123"){
			cout<<"Username salah"<<endl;
		}
		else{
			cout<<"Username dan Password salah"<<endl;
		}
	}
	cout<<endl;
	} while (uname != "admin" || pass != "admin123");
	system("pause");
}

void tambah (){
	cout<<"Masukkan banyak makanan : "; cin>>banyak[a];
	for (i=0;i<banyak[a];i++){
		cout<<"Masukkan data makanan ke-"<<menuke+1<<endl;
		cout<<"Nama    : "; cin.ignore(); getline(cin, nmMenu[menuke]);
		cout<<"Banyak Bahan : "; cin>>bBahan[menuke];
		for(int j=0;j<bBahan[menuke];j++){
			cout<<"        Bahan "<<j+1<<endl;
			cout<<"        Nama    : "; cin.ignore(); getline(cin,nmBahan[menuke][j]);
			cout<<"        Jumlah  : "; cin>>jml[menuke][j];
			cout<<"        Harga   : "; cin>>harga[menuke][j];
			total[menuke]+=jml[menuke][j]*harga[menuke][j];
		}
		cout<<endl;
		menuke++;
	}
	menu+=banyak[a];
	a++; 
	cout<<endl;
	cout<<"Berhasil memasukkan data makanan"<<endl;
	system("pause");	
}
void lihat (){
	cout<<"Jumlah makanan : "<<menu<<endl;
	for( i=0; i<menu; i++){
		cout<<"Data makanan ke-"<<i+1<<endl;
		cout<<"Nama    : "<<nmMenu[i]<<endl;
		for(int j=0;j<bBahan[i];j++){
			cout<<"        Bahan "<<j+1<<endl;
			cout<<"        Nama    : "<<nmBahan[i][j]<<endl;
			cout<<"        Harga   : "<<harga[i][j]*jml[i][j]<<endl;
		}
		cout<<"Total Harga : "<<total[i]<<endl<<endl;
	}
	system("pause");
}

void search (){
	cout<<"Cari nama makanan : "; cin.ignore(); getline(cin, cari);
	for(i=0; i<menu; i++){
		if (nmMenu[i]==cari){
			ini = i;
			ketemu=true;	
			break;
		}
	}	
	if (ketemu){
		cout<<"Data ditemukan"<<endl;
		cout<<"Data makanan ke-"<<ini+1<<endl;
		cout<<"Nama    : "<<nmMenu[ini]<<endl;
		for(int j=0;j<bBahan[ini];j++){
			cout<<"        Bahan "<<j+1<<endl;
			cout<<"        Nama    : "<<nmBahan[ini][j]<<endl;
			cout<<"        Harga   : "<<harga[ini][j]*jml[ini][j]<<endl;
		}
		cout<<"Total Harga : "<<total[ini]<<endl;
		cout<<"(Bonus) Update data (y/n) ? "; cin>>upd;
		switch (upd){
			case 'y' :
				update();
				cout<<endl;
				break;
					
			case 'n' :
				break;
		}
	} else {
		cout<<"Data tidak ditemukan"<<endl;
	}
	system("pause");
}

void update(){
	cout<<"Update data makanan ke-"<<ini+1<<endl;
	cout<<"Nama    : "; cin.ignore(); getline(cin, nmMenu[ini]);
	total[ini]=0;
	for(int j=0;j<bBahan[ini];j++){
		cout<<"        Bahan "<<j+1<<endl;
		cout<<"        Nama    : "; cin.ignore(); getline(cin,nmBahan[ini][j]);
		cout<<"        Jumlah  : "; cin>>jml[ini][j];
		cout<<"        Harga   : "; cin>>harga[ini][j];
		total[ini]+=jml[ini][j]*harga[ini][j];
	}
	cout<<"Update berhasil"<<endl;
}
