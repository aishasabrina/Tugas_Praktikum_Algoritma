#include <iostream>

using namespace std;

main()
{
	int operasi, M, N, pangkat=1, kali=0;
	
	cout<<"Program Perkalian dan Perpangkatan"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<"1. Perkalian"<<endl;
	cout<<"2. Perpangkatan"<<endl;
	cout<<"Pilih = "; cin>>operasi;
	
	switch (operasi) {
		case 1 :
		cout<<"Input angka M = "; cin>>M;
		cout<<"Input angka N = "; cin>>N;
		cout<<"\nHasil dari "<<M<<" x "<<N<<endl;
		cout<<N;
		for (int i=0; i<M; i++){
			kali+=N;
		}
		for (int i=0; i<M-1; i++){
			cout<<" + "<<N;
		}	
		cout<<" = "<<kali;
			break;
			
		case 2 :
		cout<<"Input angka M = "; cin>>M;
		cout<<"Input angka N = "; cin>>N;
		cout<<"\nHasil dari "<<M<<" ^ "<<N<<endl;
		cout<<M;
		for (int i=0; i<N; i++){
			pangkat*=M;
		}
		for (int i=0; i<N-1; i++){
			cout<<" x "<<M;
		}	
		cout<<" = "<<pangkat;
			break;
			
		default :
			cout<<"Input salah!"; 
	} 
	
	cout<<"\n\nTerima kasih :)"<<endl;
}
