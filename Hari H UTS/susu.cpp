#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
	char j;
	int u;
	int h,t,b;
	cout << "TOKO KELONTONG KERONCONGAN\n";
	cout << "--------------------------\n";
	cout << "A. Susu Dancow \n";
	cout << "   1. Ukuran Kecil  (15.000)\n";
	cout << "   2. Ukuran Sedang (25.000)\n";
	cout << "   3. Ukuran Besar  (45.000)\n";
	cout << "B. Susu Bendera \n";
	cout << "   1. Ukuran Kecil  (12.500)\n";
	cout << "   2. Ukuran Sedang (23.500)\n";
	cout << "   3. Ukuran Besar  (33.500)\n";
	cout << "C. Susu SGM \n";
	cout << "   1. Ukuran Kecil  (14.000)\n";
	cout << "   2. Ukuran Sedang (20.500)\n";
	cout << "   3. Ukuran Besar  (27.500)\n";
	cout << "D. Susu Indomilk \n";
	cout << "   1. Ukuran Kecil  (13.000)\n";
	cout << "   2. Ukuran Sedang (15.300)\n";
	cout << "   3. Ukuran Besar  (35.000)\n";

	cout << "Masukan Jenis Susu  ="; cin >> j;
	cout << "Masukan Ukuran Susu ="; cin >> u;
	
	
switch(j){
	case 'a':
	case 'A':
		cout << "\nData A Susu Dancow\n";
		
		if(u==1){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=15000*b;
		cout << "Total Harga beli =" << t; }
		else if(u==2){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=25000*b;
		cout << "Total Harga beli =" << t; }
		else if(u==3){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=45000*b;
		cout << "Total Harga beli =" << t; }


	case 'b':
	case 'B':
		cout << "\nData B Bendera \n";
	
		if(u==1){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=12500*b;
		cout << "Total Harga beli =" << t; }
		else if(u==2){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=23500*b;
		cout << "Total Harga beli =" << t; }
		else if(u==3){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=33500*b;
		cout << "Total Harga beli =" << t; }

	case 'c':
	case 'C':
		cout << "\nData C SGM \n";
		
		if(u==1){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=14000*b;
		cout << "Total Harga beli =" << t; }
		else if(u==2){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=20000*b;
		cout << "Total Harga beli =" << t; }
		else if(u==3){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=27500*b;
		cout << "Total Harga beli =" << t; }
		//printf("Data c");break;
		
	case 'd':
	case 'D':
		cout << "\nData D IndoMILK \n";
		
		if(u==1){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=13000*b;
		cout << "Total Harga beli =" << t; }
		else if(u==2){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=25300*b;
		cout << "Total Harga beli =" << t; }
		else if(u==3){
		cout << "Masukan Banyaknya Pembelian = "; cin >> b;
		t=35000*b;
		cout << "Total Harga beli =" << t; }
		//printf("Data d");break;
		
	default:
	printf("Data salah");break;
}getch();
}
