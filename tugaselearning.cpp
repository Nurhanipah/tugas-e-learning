#include<iostream>
#include<conio.h>

using namespace std;

// prototype
void lingkaran(); // memanggil fungsi luas lingkaran
void segiempat(); // memanggil fungsi luas segiempat
void segitiga(); // memanggil fungsi luas segitiga

// program utama

int main(){
		int pilihan;
		char menu;
		do{
			
		cout<<endl;
		cout<<endl;
		cout<< "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl; 
		cout<< "++ PROGRAM MENGHITUNG LUAS LINGKARAN, LUAS SEGIEMPAT, DAN SEGITIGA ++" << endl;   // judul program 
		cout<< "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout<<endl;
		cout<< "====================================================================" << endl;
		cout<<endl;
		// pilihan bangun ruang
		cout<< "PILIHAN BANGUN RUANG YANG INGIN DIHITUNG LUASNYA : " << endl;
		cout<< "1. LINGKARAN " << endl;
		cout<< "2. SEGIEMPAT " << endl;
		cout<< "3. SEGITIGA " << endl;
		cout<<endl;
		cout<< "Masukan Pilihan Bangun Ruang Yang Ingin Dihitung Luasnya [ 1/2/3 ]: ";
		cin>>pilihan;
		// fungsi main
		if(pilihan==1){
			lingkaran();  // memanggil pilihan bangun ruang lingkaran
			}
		else if(pilihan==2){
			segiempat();  // memanggil pilihan bangun ruang segiempat
			}
		else if(pilihan==3){
			segitiga();   // memanggil pilihan bangun ruang segitiga
			}
		else{
			
			cout<< " Maaf Pilihan Tidak Tersedia. Kembali ke menu Pilihan " << endl;
			}
		cout<<endl;
		cout<< " Apakah Anda Ingin Kembali[Y/T] :";
		cin>>menu;
		}
		while (menu=='y' || menu=='Y');
		return(0);
		}
		
		// menghitung luas lingkaran
		void lingkaran(){
			float r,L1;
			
			cout<< " Menghitung luas bangun ruang lingkaran; " << endl;
			cout<< " Masukan jari-jari lingkaran(cm): ";
			cin>>r;
			L1=3.14*r*r;
			cout<<endl;
			cout<< " Maka Luas Bangun Lingkaran adalah " <<L1 << endl;
			}
			
		// menghitung luas segiempat
		void segiempat(){
			float s,L2;
			
			cout<< " Menghitung luas bangun ruang segiempat; " << endl;
			cout<< " Masukan panjang sisi segiempat(cm): ";
			cin>>s;
			L2=s*s;
			cout<<endl;
			cout<< " Maka Luas Bangun segiempat adalah "<<L2 << endl;
			}
			
		// menghitung luas segitiga
		void segitiga(){
			float a,t,L3;
			
			cout<< " Menghitung luas bangun ruang segitiga; " << endl;
			cout<< " Masukan alas(cm): ";
			cin>>a;
			cout<< " Masukan tinggi(cm): ";
			cin>>t;
			L3=0.5*a*t;
			cout<<endl;
			cout<< " Maka Luas Bangun segitiga adalah "<<L3 << endl;
			}