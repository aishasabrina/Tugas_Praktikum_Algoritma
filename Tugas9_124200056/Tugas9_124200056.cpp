#include <iostream>
using namespace std;

main()
{
	int jumlah, sel_max=0, max=-100, min=100 ;
	int angka[jumlah],selisih[jumlah];
	float total=0, rata;
	
	cout<<"Masukkan banyak angka : "; cin>>jumlah;
	for (int i=0; i<jumlah; i++){
		cout<<"Angka ke-"<<i+1<<" : "; cin>>angka[i];
		total+= angka[i];
		
		//Maksimum
		if (angka[i]>max) {
			max= angka[i];
		}
		//Minimum
		if (angka[i]<min) {
			min= angka[i];
		}
		//Selisih Max
		if(i>0){
			if(angka[i]<angka[i-1]){
			selisih[i]=angka[i-1]-angka[i];
			} else 
			selisih[i]=angka[i]-angka[i-1];
			
			if (selisih[i]>sel_max) {
				sel_max= selisih[i];
			}
		}
		
	}
	
	//Rata-rata
	rata=total/jumlah;
	
	cout<<endl<<endl;
	cout<<"_____Hasil_____"<<endl;
	cout<<"Deret		: ";
		for(int i=0; i<jumlah; i++){
			cout<<angka[i]<<" ";
		}
	cout<<"\nMaksimum	: "<<max;
	cout<<"\nMinimum		: "<<min;
	cout<<"\nRata-rata	: "<<rata;
	cout<<"\nSelisih Max	: "<<sel_max;
	
	
	
	
	
	return 0;
}

