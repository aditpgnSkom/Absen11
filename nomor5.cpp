#include<iostream>
using namespace std;

#define MAKS 8

int main()
{
	int baris, kolom, hasil_kali;

	for (baris = 1; baris <= MAKS; baris++)
	{
		for (kolom = 1; kolom <= MAKS; kolom++)
		{
			hasil_kali = baris * kolom;
			cout<< hasil_kali << " ";
		}
		cout<<endl;    /* pindah baris */
	}
}
