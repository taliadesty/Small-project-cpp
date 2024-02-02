#include <iostream>
using namespace std;

int main(){
	
	//Nama  : Talia Desty
	//NPM   : 2117051017
	
	cout << "Program Hitung Jumlah Tabungan pada Sebuah Bank" << endl;
	
	int simpanan_pokok;
	int bunga;
	int lama;
	int i;
	
	//input
	cout << "Jumlah Simpanan Pokok : ";
	cin >> simpanan_pokok;
	cout << "Bunga Per Bulan : ";
	cin >> bunga;
	cout << "Lama Simpanan : ";
	cin >> lama;

    //output
    cout << "simpanan pokok :" <<simpanan_pokok<< endl;
	for(int i=1; i<=lama; i++){
		simpanan_pokok = simpanan_pokok+(bunga*simpanan_pokok/100);
		//simpanan_pokok = simpanan_pokok+((bunga/100)*simpanan_pokok);
		cout << "bulan ke-" <<i<<" : "<<simpanan_pokok << endl;
	}	
}