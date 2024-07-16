#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct penjualan	//record
{
    char jenissusu;
    char ukuransusu;
    int  hargasusu, banyaksusu, totalbayar;
    string namasusu;
    string kategorisusu;
}; 



//void inputsusu();
//void pengurutan();
//void lihatdata();
int i;

penjualan susu[100];		//deklarasi array record	
penjualan temp[100];		//deklarasi buble sort

int main() 
{
	int x;
	int j;
	int pilih;
	int nomor;
	
	menu:
	system("cls");
    cout << "+-------------------------------+" << endl;
    cout << "|     PROGRAM Struktur Data     |" << endl;
    cout << "+-------------------------------+" << endl;
    cout << "|Menu:                          |" << endl;
    cout << "|1. Input SUSU       c          |" << endl;
    cout << "|2. Daftar List                 |" << endl;
    cout << "|3. Pengurutan SUSU             |" << endl;
    cout << "|4. Keluar                      |" << endl;
    cout << "+-------------------------------+" << endl;
    cout <<  "Pilih Nomor Menu: ";
    cin >> pilih;
    
    //menu input data mhs fungsi
    if (pilih == 1)
    {
    system("cls");
     int J; //deklarasi jumlahmhs
	 int a; //deklarasi perulangan a	
{
		
	cout << "Masukan Jumlah data : "; cin >> J;
	cout << endl;
	
	for(a=0; a<J; a++)
	{
	cout << "\n";
	cout << "data Ke - " 			<< i + 1 <<endl;
	cout << "     TOKO Maju Jaya\n";
	cout << "----------------------------\n";
	cout << "A. Susu Dancow \n";
	cout << "   1. Ukuran Kecil  (15.000)\n";
	cout << "   2. Ukuran Sedang (25.000)\n";
	cout << "   3. Ukuran Besar  (45.000)\n";
	cout << "----------------------------\n\n";
	cout << "B. Susu Bendera \n";
	cout << "   1. Ukuran Kecil  (12.500)\n";
	cout << "   2. Ukuran Sedang (23.500)\n";
	cout << "   3. Ukuran Besar  (33.500)\n";
	cout << "----------------------------\n\n";
	cout << "C. Susu SGM \n";
	cout << "   1. Ukuran Kecil  (14.000)\n";
	cout << "   2. Ukuran Sedang (20.500)\n";
	cout << "   3. Ukuran Besar  (27.500)\n";
	cout << "----------------------------\n\n";
	cout << "D. Susu Indomilk \n";
	cout << "   1. Ukuran Kecil  (13.000)\n";
	cout << "   2. Ukuran Sedang (15.300)\n";
	cout << "   3. Ukuran Besar  (35.000)\n";
	cout << "----------------------------\n\n";

	cout << "Masukan Jenis Susu  ="; cin >> susu[i].jenissusu;
	cout << "Masukan Ukuran Susu ="; cin >> susu[i].ukuransusu;
	
	
	//proses
	{
	
		if ((susu[i].jenissusu == 'A'|| susu[i].jenissusu == 'a') && (susu[i].ukuransusu == '1')) 
		{
			susu[i].namasusu = "Dancow";
			susu[i].kategorisusu = "kecil";
			susu[i].hargasusu = 15000;
		} 
		else if ((susu[i].jenissusu == 'A'|| susu[i].jenissusu == 'a') && (susu[i].ukuransusu == '2')) 
		{
			susu[i].namasusu = "Dancow";
			susu[i].kategorisusu = "sedang";
			susu[i].hargasusu = 25000;
		} 
		else if ((susu[i].jenissusu == 'A'|| susu[i].jenissusu == 'a') && (susu[i].ukuransusu == '3')) 
		{
			susu[i].namasusu = "Dancow";
			susu[i].kategorisusu = "besar";
			susu[i].hargasusu = 45000;
		} 
		else if ((susu[i].jenissusu == 'B'|| susu[i].jenissusu == 'b') && (susu[i].ukuransusu == '1')) 
		{
			susu[i].namasusu = "Bendera";
			susu[i].kategorisusu = "kecil";
			susu[i].hargasusu = 12500;
		} 
		else if ((susu[i].jenissusu == 'B'|| susu[i].jenissusu == 'b') && (susu[i].ukuransusu == '2')) 
		{
			susu[i].namasusu = "Bendera";
			susu[i].kategorisusu = "Sedang";
			susu[i].hargasusu = 23500;
		} 
		else if ((susu[i].jenissusu == 'B'|| susu[i].jenissusu == 'b') && (susu[i].ukuransusu == '3')) 
		{
			susu[i].namasusu = "Bendera";
			susu[i].kategorisusu = "Besar";
			susu[i].hargasusu = 33500;
		} 
		else if ((susu[i].jenissusu == 'C'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '1')) 
		{
			susu[i].namasusu = "SGM";
			susu[i].kategorisusu = "kecil";
			susu[i].hargasusu = 14000;
		} 
		else if ((susu[i].jenissusu == 'C'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '2')) 
		{
			susu[i].namasusu = "SGM";
			susu[i].kategorisusu = "sedang";
			susu[i].hargasusu = 20000;
		} 
		else if ((susu[i].jenissusu == 'C'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '3')) 
		{
			susu[i].namasusu = "SGM";
			susu[i].kategorisusu = "besar";
			susu[i].hargasusu = 27500;
		} 
		else if ((susu[i].jenissusu == 'D'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '1')) 
		{
			susu[i].namasusu = "Indomillk";
			susu[i].kategorisusu = "kecil";
			susu[i].hargasusu = 13000;
		} 
		else if ((susu[i].jenissusu == 'D'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '2'))
		 {
			susu[i].namasusu = "Indomilk";
			susu[i].kategorisusu = "sedang";
			susu[i].hargasusu = 25300;
		} 
		else if ((susu[i].jenissusu == 'D'|| susu[i].jenissusu == 'c') && (susu[i].ukuransusu == '3')) 
		{
			susu[i].namasusu = "Indomilk";
			susu[i].kategorisusu = "Besar";
			susu[i].hargasusu = 35000;
		} 
	}
	
	cout << "banyak susu          : "; cin >> susu[i].banyaksusu;
	//rumus total bayar
	susu[i].totalbayar = susu[i].hargasusu * susu[i].banyaksusu;
	i++;
	}
        getch();
        goto menu;	
}	
	
} 	//penutup pilih 1
    	
    	
    	
    	
    //menu untuk melihat data
    else if (pilih == 2)
    {
    system("cls");
	cout << "------------------------------------------------------------------\n";
	cout << "No. Jumlah        Nama             Ukuran            Total        \n";
	cout << "    Beli          SUSU             SUSU              Bayar        \n";
	cout << "------------------------------------------------------------------\n";
	for (x=0; x<i; x++)
	{
		cout << setiosflags(ios::left) << setw(4)  << x + 1;
		cout << setiosflags(ios::left) << setw(11) << susu[x].banyaksusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].namasusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].kategorisusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].totalbayar;
		cout <<endl;
	}
	cout << "-------------------------------------------------------------------\n\n\n";		
        getch();
        goto menu;
    }
    
    
    
    
    
    //menu search(sequential search)
    else if (pilih == 3)
    {
    system("cls");
	cout << "------------------------------------------------------------------\n";
	cout << "No. Jumlah        Nama             Ukuran            Total        \n";
	cout << "    Beli          SUSU             SUSU              Bayar        \n";
	cout << "------------------------------------------------------------------\n";
	for (x=0; x<i; x++)
	{
		cout << setiosflags(ios::left) << setw(4)  << x + 1;
		cout << setiosflags(ios::left) << setw(11) << susu[x].banyaksusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].namasusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].kategorisusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].totalbayar;
		cout <<endl;
	}
	cout << "-------------------------------------------------------------------\n\n\n"; 
    getch();    
        
        
        for (int x = 1; x<i; x++)
    {
        for (int j = 0; j <i - x; j++)
        {
            //ascending 
            if (susu[j].banyaksusu > susu[j + 1].banyaksusu)
            {
            	//tukar banyak susu
            	temp[j].banyaksusu=susu[j].banyaksusu;
                susu[j].banyaksusu = susu[j + 1].banyaksusu;
                susu[j+1].banyaksusu = temp[j].banyaksusu;
                
                //tukar nama susu
            	temp[j].namasusu=susu[j].namasusu;
                susu[j].namasusu = susu[j + 1].namasusu;
                susu[j+1].namasusu = temp[j].namasusu;

				//tukar kategori susu
            	temp[j].kategorisusu=susu[j].kategorisusu;
                susu[j].kategorisusu = susu[j + 1].kategorisusu;
                susu[j+1].kategorisusu = temp[j].kategorisusu;

				//tukar total bayar
            	temp[j].totalbayar=susu[j].totalbayar;
                susu[j].totalbayar= susu[j + 1].totalbayar;
                susu[j+1].totalbayar = temp[j].totalbayar;
            }
        }
    }
    system("cls");
	cout << "------------------------------------------------------------------\n";
	cout << "No. Jumlah        Nama             Ukuran            Total        \n";
	cout << "    Beli          SUSU             SUSU              Bayar        \n";
	cout << "------------------------------------------------------------------\n";
	for (x=0; x<i; x++)
	{
		cout << setiosflags(ios::left) << setw(4)  << x + 1;
		cout << setiosflags(ios::left) << setw(11) << susu[x].banyaksusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].namasusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].kategorisusu;
		cout << setiosflags(ios::left) << setw(17) << susu[x].totalbayar;
		cout <<endl;
	}
	cout << "-------------------------------------------------------------------\n\n\n";    
        cout << "tekan untuk kembali ke Menu....";
        getch();
        goto menu;
    }
    
    
    
    
	//menu keluar
    else if(pilih == 4)
	{
		system("cls;");
        cout << "\nTrimakasih dan janganlupa belajar\n";
        cout << "Nama   : Muhammad Lintang Pamungkas\n";
        cout << "NIM    : 210103028\n";
        cout << "Kelas  : 21TI A1\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        getch();
    }
}
