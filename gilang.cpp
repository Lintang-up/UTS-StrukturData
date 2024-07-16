#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void inputData();
void pengurutan();
void tampilanLayar();
void tampilHargaSatuan();
void keluar();

int jenisSusu, kodeUkuranKaleng, hargaSatuan, jumlahBeli, total;

    struct Susu {
        public:
            string jenisSusu, namaProduk, ukuranKaleng;
            int kodeUkuranKaleng, hargaSatuan;
            int totalBayar, banyakBeli;
    };

Susu susu[32];

int main() {

    int pilihan;
    cout << "==================================" << endl;
    cout << "          Toko Maju Jaya          " << endl;
    cout << "==================================" << endl;
    cout << "Distribusi Produk Makanan Surakarta" << endl;

    cout << "==================================" << endl;
    cout << "+          Menu Tampilan         +" << endl;
    cout << "==================================" << endl;
    cout << "1. Input Data" << endl;
    cout << "2. Proses Pencarian Data" << endl;
    cout << "3. Tampilan Layar" << endl;
    cout << "4. Keluar" << endl;
    cout << "==================================" << endl;
    cout << "Pilihan [1-5]: ";
    cin >> pilihan;

    switch ( pilihan )
    {
    case 1:
        inputData();
    case 2:
        // pengurutan();
    case 3:
        tampilanLayar();
    case 4:
        // keluar();
    
    default:
        cout << " Inputan anda salah! ";
    }
 }


    void inputData() {
        // system('cls');

        cout << "==================================" << endl;
        cout << "+   Kode   |     Nama produk     +" << endl;
        cout << "==================================" << endl;
        cout << "+   A   |        Dancow          +" << endl;
        cout << "==================================" << endl;
        cout << "+   B   |        Bendera         +" << endl;
        cout << "==================================" << endl;
        cout << "+   C   |        SGM             +" << endl;
        cout << "==================================" << endl;
        cout << "+   D   |        Indomilk        +" << endl;
        cout << "==================================" << endl;
        cout << "Masukkan Jenis Susu: ";
        cin >> susu[31].jenisSusu;

        if ( susu[31].jenisSusu == "A" )
        {
            susu[31].namaProduk = "Dancow";
        } 
        else if( susu[31].jenisSusu == "B" ) {
            susu[31].namaProduk = "Bendera";
        } 
        else if( susu[31].jenisSusu == "C" ) {
            susu[31].namaProduk = "SGM";
        } 
        else if( susu[31].jenisSusu == "D" ) {
            susu[31].namaProduk = "Indomilk";
        }
        

        cout << "==================================" << endl;
        cout << "+   Kode   |        Ukuran       +" << endl;
        cout << "==================================" << endl;
        cout << "+    1     |        Kecil        +" << endl;
        cout << "==================================" << endl;
        cout << "+    2     |        Sedang       +" << endl;
        cout << "==================================" << endl;
        cout << "+    3     |        Besar        +" << endl;
        cout << "==================================" << endl;
        cout << "Masukkan Ukuran Kaleng: ";
        cin >> susu[31].kodeUkuranKaleng;

        if ( susu[31].kodeUkuranKaleng == 1 )
        {
            susu[31].ukuranKaleng = "Kecil";
        } 
        else if( susu[31].kodeUkuranKaleng == 2 ) {
            susu[31].ukuranKaleng = "Sedang";
        } 
        else if( susu[31].kodeUkuranKaleng == 3 ) {
            susu[31].ukuranKaleng = "Besar";
        }

        

        tampilHargaSatuan();

        cout << "Jumlah yang dibeli: ";
        cin >> jumlahBeli;

        if ( susu[31].jenisSusu == "A" && susu[31].kodeUkuranKaleng == 1 )
        {
            susu[31].hargaSatuan = 15000;
            susu[31].namaProduk = "Dancow";
            susu[31].ukuranKaleng = "Kecil";
        } else if( susu[31].jenisSusu == "A" && susu[31].kodeUkuranKaleng == 2 ) {
            susu[31].hargaSatuan = 25000;
            susu[31].namaProduk = "Dancow";
            susu[31].ukuranKaleng = "Sedang";
        } else if( susu[31].jenisSusu == "A" && susu[31].kodeUkuranKaleng == 3 ) {
            susu[31].hargaSatuan = 45000;
            susu[31].namaProduk = "Dancow";
            susu[31].ukuranKaleng = "Besar";
        }
        susu[31].totalBayar = susu[31].hargaSatuan * jumlahBeli;
        cout << "Harga yang harus dibayar: ";
        cout << susu[31].totalBayar;
    }

    void tampilanLayar() {
        
    }
	


    void tampilHargaSatuan() 
    {
	
        cout << "=============================================================================" << endl;
        cout << "               			Harga Satuan Barang 					          " << endl;
        cout << "=============================================================================" << endl;
        cout << "Jenis Susu |                 Harga Berdasarkan kaleng susu             	 |" << endl;
        cout << "=============================================================================" << endl;
        cout << "                |       Kecil       |       Sedang      |       Besar       |" << endl;
        cout << "=============================================================================" << endl;
        cout << "     Dancow     |       15000       |       25000       |       45000       |" << endl;
        cout << "=============================================================================" << endl;
        cout << "     Bendera    |       12500       |       22500       |       33500       |" << endl;
        cout << "=============================================================================" << endl;
        cout << "     SGM        |       14000       |       20000       |       27500       |" << endl;
        cout << "=============================================================================" << endl;
        cout << "    Indomilk    |       13000       |       25300       |       35000       |" << endl;
        cout << "=============================================================================" << endl;
    }
