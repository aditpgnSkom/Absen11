#include<iostream>
using namespace std;

int main() { 
	char pilih;
	int sudah_benar = 0;  
	cout << "Pilihlah Y atau T" << endl;
	while(!sudah_benar){
		cin>>pilih;	 		
		sudah_benar = (pilih == 'Y') || (pilih == 'y')||
					(pilih == 'T') || (pilih == 't');
	}
	switch(pilih) 	 {
	case 'Y':
	case 'y':
		cout<<endl<<"Pilihan anda adalah Y";
		break;
	case 'T':
	case 't':
		cout<<endl<<"Pilihan anda adalah T";
	}
}