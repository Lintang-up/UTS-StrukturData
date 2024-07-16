#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
using namespace std;

const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%d-%m-%Y  %X", &tstruct);

    return buf;
}

struct tagihan
{
    string idpel, nama, daya, tgl;
    int bulanlalu, bulansekarang, beban, tarif, pemakaian, biaya, diskon, totalbayar;
};tagihan pln[100];
int a;

main(){
    int pilih, x, y, z; 
    char input, pemadaman;
    int jam, biayaadmin;
    
    menu:
    system("cls");
    cout << "+-------------------------------+" << endl;
    cout << "| PROGRAM TAGIHAN BAYAR LISTRIK |" << endl;
    cout << "+-------------------------------+" << endl;
    cout << "|Menu:                          |" << endl;
    cout << "|1. Bayar Tagihan Listrik       |" << endl;
    cout << "|2. Daftar Nama yang Bayar      |" << endl;
    cout << "|3. Keluar                      |" << endl;
    cout << "+-------------------------------+" << endl;
    cout <<  "Pilih Nomor Menu: ";
    cin >> pilih;
    if(pilih == 1){
        do
        {
            system("cls");
            cout << "-----------------------------------------------------------------" << endl;
            cout << "                      Bayar Tagihan Listrik                      " << endl;
            cout << "-----------------------------------------------------------------" << endl;
            cout << "ID Pelanggan                        : ";
            cin >> pln[a].idpel;
            cout << "Nama                                : "; fflush(stdin); getline (cin, pln[a].nama);
            //cin >> pln[a].nama;
            cout << "Masukkan Tanggal(mm/yyyy)           : ";
            cin >> pln[a].tgl;
            cout << "Masukkan Stand Meter Awal           : ";
            cin >> pln[a].bulanlalu;
            standmeter:
            cout << "Masukkan Stand Meter Akhir          : ";
            cin >> pln[a].bulansekarang;
            
            pln[a].pemakaian = pln[a].bulansekarang - pln[a].bulanlalu;
            if(pln[a].pemakaian<0){
            	cout << "nomor stand meter akhir harus lebih dari stand meter awal" << endl;
            	getch();
            	goto standmeter;
			}
            
            cout << endl;
            
            
            system("cls");
            cout << "+--+--------------------------+" << endl;
            cout << "|No|      Daya Pada Meteran   |" <<endl;
            cout << "+--+--------------------------+" << endl;
            cout << "|1.|          450 VA          |" << endl;
            cout << "|2.|          900 VA          |" << endl;
            cout << "|3.|         1300 VA          |" << endl;
            cout << "|4.|         2200 VA          |" << endl;
            cout << "+-----------------------------+" << endl;
            meteran:
            cout << "Masukkan Nomor Daya Meteran: ";
            cin >> x;
            if(x == 1){
                pln[a].daya = "450 VA";
                pln[a].beban = 10000;
                pln[a].tarif = 500;
            }
            else if(x == 2){
                pln[a].daya = "900 VA";
                pln[a].beban = 20000;
                pln[a].tarif = 1000;
            }
            else if(x == 3){
                pln[a].daya = "1300 VA";
                pln[a].beban = 25000;
                pln[a].tarif = 1440;
            }
            else if(x == 4){
                pln[a].daya = "2200 VA";
                pln[a].beban = 30000;
                pln[a].tarif = 1440;
            }
            else{
                cout << "kode salah! coba lagi"<< endl;
                goto meteran;
            }
            
            system("cls");
            cout << endl;
            cout << "apakah pernah mengalami pemadaman listrik?(Y/N) : ";
            cin >> pemadaman;
            if(pemadaman == 'Y' || pemadaman == 'y'){
            cout << "berapa lama(jam)                                : ";
            cin >>jam;
            }
            else{
                jam = 0;
            }
            
            //rumus
            pln[a].biaya = pln[a].pemakaian * pln[a].tarif;
            pln[a].diskon = jam * 2000;
            biayaadmin = 2500;
            pln[a].totalbayar = pln[a].biaya +pln[a].beban + biayaadmin - pln[a].diskon;
            
            //output
            system("cls");
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "                      STRUK PEMBAYARAN TAGIHAN LISTRIK                     " << endl;
            cout << "---------------------------------------------------------------------------" << endl;
            cout << "	ID Pelanggan          : " << pln[a].idpel << endl;
            cout << "	BL/TH                 : " << pln[a].tgl << endl;
            cout << "	Nama                  : " << pln[a].nama << endl;
            cout << "	Stand Meter           : " << pln[a].bulanlalu << " - " << pln[a].bulansekarang << endl;
            cout << "	Jumlah Pemakaian      : " << pln[a].pemakaian << " KWh" << endl;
            cout << "	Daya Meteran          : " << pln[a].daya << endl;
            cout << "	Tarif /KWh            : Rp. " << pln[a].tarif << endl;
            cout << "	Jumlah                : Rp. " << pln[a].biaya << endl;
            cout << "	Beban                 : Rp. " << pln[a].beban << endl;
            cout << "	Diskon                : Rp. " << pln[a].diskon << endl;
            cout << "	TGL bayar             : " << currentDateTime() <<endl;
            cout << endl;
            cout << "	   PLN menyatakan struk ini sebagai bukti pembayaran yang sah      " << endl;
            cout << endl;
            cout << "	Biaya Admin           : Rp. " << biayaadmin << endl;
            cout << "	Total Bayar           : Rp. " << pln[a].totalbayar << endl << endl;
			cout << "                                TERIMAKASIH                                \n";
			cout << "              Rincian Tagihan dapat diakses di www.pln.co.id,              \n";
			cout << "       Informasi Hubungi Call Center:123 Atau Hub. PLN Terdekat :123       \n";
			cout << "---------------------------------------------------------------------------\n";                
            getch();
        
            cout << "Ingin Input Lagi?(Y/N): ";
            cin >> input;
            a++;
        } while (input == 'Y' || input == 'y');
        goto menu;
    }
    
    else if(pilih == 2){
        system("cls");
        cout << "----------------------" << endl;
        cout << "Daftar Nama yang Bayar" << endl;
        cout << "----------------------" << endl;
        cout << endl;
        cout << "Biaya Admin : 2500" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        cout << "No.  Nama              ID           Daya       Pemakaian    Tarif      Beban       Diskon      Total      BL/TH"   << endl;
        cout << "                    Pelanggan      Meteran       (KWh)     Per KWh                             bayar      Bayar"   << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        //z = 0;
        for(y=0; y<a; y++){
            cout << setiosflags(ios::left) << setw(5) << y+1;
            cout << setiosflags(ios::left) << setw(15) << pln[y].nama;
            cout << setiosflags(ios::left) << setw(15) << pln[y].idpel;
            cout << setiosflags(ios::left) << setw(12) << pln[y].daya;
            cout << setiosflags(ios::left) << setw(12) << pln[y].pemakaian;
            cout << setiosflags(ios::left) << setw(12) << pln[y].tarif;
            cout << setiosflags(ios::left) << setw(12) << pln[y].beban;
            cout << setiosflags(ios::left) << setw(12) << pln[y].diskon;
            cout << setiosflags(ios::left) << setw(12) << pln[y].totalbayar;
            cout << setiosflags(ios::left) << setw(12) << pln[y].tgl <<endl;
        }
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        getch();
        goto menu;
    }
    
    else if(pilih == 3){
        system("cls");
        cout << "\n";
        cout << "Terimakasih dan jangan Lupa Belajar\n\n";
        cout << "Nama	: M Soleh   || Muhammad Lintang Pamungkas\n";
        cout << "NIM	: 210103023 || 210103028\n";
        cout << "Kelas	: 21 TIA1\n";
        getch();
    }
}
