#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>

using namespace std;

struct mahasiswa
{
    int nim;
    // string nama, kelas, grade;
    string nama, kelas, grade;
    float nilai1, nilai2, nilai3, RataRata, nilaiIP;
};
mahasiswa data[10];
mahasiswa data1[10];
int i;

void inputdata();
void lihatdata();
void bubble();
void bubble1();
void sequentialsearch();
void hapusdata();

main()
{
    int nomor, pilih;
menu:
    system("cls");
    cout << "+----------------------+" << endl;
    cout << "|     PROGRAM UTS      |" << endl;
    cout << "+----------------------+" << endl;
    cout << "| Pilih menu:          |" << endl;
    cout << "| 1. Input data        |" << endl;
    cout << "| 2. Lihat Data        |" << endl;
    cout << "| 3. Sorting           |" << endl;
    cout << "| 4. Searching         |" << endl;
    cout << "+----------------------+" << endl;
    cout << "Pilih nomor: ";
    cin >> nomor;

    // pilihan untuk menginputkan data
    if (nomor == 1)
    {
        inputdata();
        goto menu;
    }

    // pilihan menu untuk melihat data
    else if (nomor == 2)
    {
        system("cls");
        cout << "+----------------------+" << endl;
        cout << "|      LIHAT DATA      |" << endl;
        cout << "+----------------------+\n"
             << endl;
        lihatdata();
        getch();
        goto menu;
    }

    // pilihan menu untuk melakukan sorting(bubble sort)
    else if (nomor == 3)
    {
        nomor3:
        system("cls;");
        int jawab;
        cout << "+----------------------+" << endl;
        cout << "|      BUBBLE SORT     |" << endl;
        cout << "+----------------------+" << endl;
        cout << " Metode:" << endl;
        cout << " 1. Ascending" << endl;
        cout << " 2. Descending " << endl;
        cout << " Pilih metode nomor:";
        cin >> jawab;
        if (jawab == 1)
        {
            bubble();
            getch();
            goto menu;
        }
        else if(jawab==2){
            bubble1();
            getch();
            goto menu;
        }
        else{
            goto nomor3;
        }
    }

    // menu untuk melakukan search(sequential search)
    else if (nomor == 4)
    {
        system("cls");
        sequentialsearch();
        getch();
        goto menu;
    }

    else if(nomor == 5){
        cout << "Wassalamu'alaikum Wr. Wb";
    }

    // untuk menghapus data
    else if (nomor == 6)
    {
        hapusdata();
        goto menu;
    }
    else{goto menu;}
}

// fungsi untuk menginputkan data sebelum melakukan proses pada menu yang lain
void inputdata()
{
    int input, a;
    system("cls");
    cout << "+----------------------+" << endl;
    cout << "|      INPUT DATA      |" << endl;
    cout << "+----------------------+\n"
         << endl;

    cout << "Jumlah input data mahasiswa: ";
    cin >> input;

    for (a = 0; a < input; a++)
    {
        cout << "Data mahasiswa ke-" << i + 1 << endl;
        cout << "Nama                   : ";
        fflush(stdin);
        getline(cin, data[i].nama);
        // cin >> data[i].nama;
        cout << "NIM                    : ";
        cin >> data[i].nim;
        cout << "Kelas                  : ";
        cin >> data[i].kelas;
        cout << "Nilai Struktur Data    : ";
        cin >> data[i].nilai1;
        cout << "Nilai P.Web            : ";
        cin >> data[i].nilai2;
        cout << "Nilai Jarkom           : ";
        cin >> data[i].nilai3;
        cout << "\n";

        data[i].RataRata = (data[i].nilai1 + data[i].nilai2 + data[i].nilai3) / 3;
        if (data[i].RataRata >= 85)
        {
            data[i].grade = "A";
        }
        else if (data[i].RataRata >= 75)
        {
            data[i].grade = "B";
        }
        else if (data[i].RataRata >= 60)
        {
            data[i].grade = "C";
        }
        else if (data[i].RataRata >= 50)
        {
            data[i].grade = "D";
        }
        else if (data[i].RataRata >= 40)
        {
            data[i].grade = "E";
        }
        else
        {
            data[i].grade = "F";
        }
        i++;
    }
    getch();
}

// fungsi untuk melihat data yang sudah di input
void lihatdata()
{
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    cout << "No.  Nama                NIM         Kelas         Nilai       Nilai        Nilai        Rata-      Grade  " << endl;
    cout << "                                               Struktur Data  Jar.kom       P.Web        Rata              " << endl;
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
    for (int a = 0; a < i; a++)
    {
        cout << setiosflags(ios::left) << setw(5) << a + 1;
        cout << setiosflags(ios::left) << setw(20) << data[a].nama;
        cout << setiosflags(ios::left) << setw(12) << data[a].nim;
        cout << setiosflags(ios::left) << setw(15) << data[a].kelas;
        cout << setiosflags(ios::left) << setw(13) << data[a].nilai1;
        cout << setiosflags(ios::left) << setw(13) << data[a].nilai2;
        cout << setiosflags(ios::left) << setw(12) << data[a].nilai3;
        cout << setiosflags(ios::left) << setw(12) << data[a].RataRata;
        cout << setiosflags(ios::left) << setw(6) << data[a].grade << endl;
    }
    cout << "-----------------------------------------------------------------------------------------------------------" << endl;
}

// sotring bubble
void bubble()
{
    // data nim sebelum diurutkan
    system("cls");
    cout << "DATA NIM SEBELUM DI URUTKAN" << endl;
    lihatdata();
    cout << endl;
    getch();

    // bubble sort secara ascending
    for (int a = 1; a < i; a++)
    {
        for (int b = 0; b <i - a; b++)
        {
            // yang membedakan ascending dan descending adalah percabangan ini
            if (data[b].nim > data[b + 1].nim)
            {
                data1[b].nama=data[b].nama;
                data[b].nama = data[b+1].nama;
                data[b+1].nama = data1[b].nama;

                data1[b].nim=data[b].nim;
                data[b].nim = data[b+1].nim;
                data[b+1].nim = data1[b].nim;

                data1[b].kelas=data[b].kelas;
                data[b].kelas = data[b+1].kelas;
                data[b+1].kelas = data1[b].kelas;

                data1[b].nilai1=data[b].nilai1;
                data[b].nilai1 = data[b+1].nilai1;
                data[b+1].nilai1 = data1[b].nilai1;

                data1[b].nilai2=data[b].nilai2;
                data[b].nilai2= data[b+1].nilai2;
                data[b+1].nilai2 = data1[b].nilai2;

                data1[b].nilai3=data[b].nilai3;
                data[b].nilai3= data[b+1].nilai3;
                data[b+1].nilai3 = data1[b].nilai3;

                data1[b].RataRata=data[b].RataRata;
                data[b].RataRata= data[b+1].RataRata;
                data[b+1].RataRata = data1[b].RataRata;

                data1[b].grade=data[b].grade;
                data[b].grade= data[b+1].grade;
                data[b+1].grade = data1[b].grade;
            }
        }
    }

    // perulangan untuk menampilkan nim setelah diurutkan
    cout << "DATA NIM SETELAH DI URUTKAN SECARA ASCENDING" << endl;
    lihatdata();
}

void bubble1()
{
    // data nim sebelum diurutkan
    system("cls");
    cout << "DATA NIM SEBELUM DI URUTKAN" << endl;
    lihatdata();
    cout << endl;
    getch();

    // bubble sort secara descending
    for (int a = 1; a < i; a++)
    {
        for (int b = 0; b <i - a; b++)
        {
            // yang membedakan ascending dan descending adalah percabangan ini 
            if (data[b].nim < data[b + 1].nim)
            {
                data1[b].nama=data[b].nama;
                data[b].nama = data[b+1].nama;
                data[b+1].nama = data1[b].nama;

                data1[b].nim=data[b].nim;
                data[b].nim = data[b+1].nim;
                data[b+1].nim = data1[b].nim;

                data1[b].kelas=data[b].kelas;
                data[b].kelas = data[b+1].kelas;
                data[b+1].kelas = data1[b].kelas;

                data1[b].nilai1=data[b].nilai1;
                data[b].nilai1 = data[b+1].nilai1;
                data[b+1].nilai1 = data1[b].nilai1;

                data1[b].nilai2=data[b].nilai2;
                data[b].nilai2= data[b+1].nilai2;
                data[b+1].nilai2 = data1[b].nilai2;

                data1[b].nilai3=data[b].nilai3;
                data[b].nilai3= data[b+1].nilai3;
                data[b+1].nilai3 = data1[b].nilai3;

                data1[b].RataRata=data[b].RataRata;
                data[b].RataRata= data[b+1].RataRata;
                data[b+1].RataRata = data1[b].RataRata;

                data1[b].grade=data[b].grade;
                data[b].grade= data[b+1].grade;
                data[b+1].grade = data1[b].grade;
            }
        }
    }

    // perulangan untuk menampilkan nim setelah diurutkan
    cout << "DATA NIM SETELAH DI URUTKAN SECARA DESCENDING" << endl;
    lihatdata();
}

// sequential search
void sequentialsearch()
{
    int pilih;
sequential:
    cout << "+----------------------+" << endl;
    cout << "| SEQUENTIAL SEARCHING |" << endl;
    cout << "+----------------------+" << endl;
    cout << "1. Berdasarkan NIM " << endl;
    cout << "2. Berdasarkan Nama " << endl;
    cout << "3. Berdasarkan Kelas " << endl;
    cout << "Pilih nomer: ";
    cin >> pilih;

    if (pilih == 1)
    {
        int a, key, jumlah = 0;
        bool ketemu;

        cout << "\nmasukkan NIM: ";
        cin >> key;

        for (a = 0; a < i; a++)
        {
            if (data[a].nim == key)
            {
                ketemu = true;
                data1[jumlah] = data[a];
                jumlah++;
            }
        }
        if (ketemu)
        {
            cout << "NIM [" << key << "] ditemukan" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            cout << "No.  Nama                NIM         Kelas         Nilai       Nilai        Nilai        Rata-      Grade  " << endl;
            cout << "                                               Struktur Data  Jar.kom       P.Web        Rata              " << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            for (a = 0; a < jumlah; a++)
            {
                cout << setiosflags(ios::left) << setw(5) << a + 1;
                cout << setiosflags(ios::left) << setw(20) << data1[a].nama;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nim;
                cout << setiosflags(ios::left) << setw(15) << data1[a].kelas;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai1;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai2;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nilai3;
                cout << setiosflags(ios::left) << setw(12) << data1[a].RataRata;
                cout << setiosflags(ios::left) << setw(06) << data1[a].grade << endl;
            }
            cout << "\n\nJumlah : " << jumlah << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        }
        else
        {
            cout << "\nNIM [" << key << "] tidak ditemukan" << endl;
        }
    }else if(pilih==2){
        string key;
        int a, jumlah = 0;
        bool ketemu;

        // jika berdasarkan nama, nama harus sama besar kecilnya dan komplit
        cout << "\nMasukkan Nama: ";
        cin>>key;

        for(a=0;a<i;a++){
            if(data[a].nama==key){
                ketemu=true;
                data1[jumlah]=data[a];
                jumlah++;
            }
        }
        if(ketemu){
            cout << "Nama [" << key << "] ditemukan" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            cout << "No.  Nama                NIM         Kelas         Nilai       Nilai        Nilai        Rata-      Grade  " << endl;
            cout << "                                               Struktur Data  Jar.kom       P.Web        Rata              " << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            for (a = 0; a < jumlah; a++)
            {
                cout << setiosflags(ios::left) << setw(5) << a + 1;
                cout << setiosflags(ios::left) << setw(20) << data1[a].nama;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nim;
                cout << setiosflags(ios::left) << setw(15) << data1[a].kelas;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai1;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai2;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nilai3;
                cout << setiosflags(ios::left) << setw(12) << data1[a].RataRata;
                cout << setiosflags(ios::left) << setw(06) << data1[a].grade << endl;
            }
            cout << "\n\nJumlah : " << jumlah << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        
        }
        else{
            cout << "\nNama [" << key << "] tidak ditemukan" << endl;
        }
    }
    else if(pilih==3){
        string key;
        int a, jumlah = 0;
        bool ketemu;

        // jika berdasarkan nama, nama harus sama besar kecilnya dan komplit
        cout << "\nMasukkan Kelas: ";
        cin>>key;

        for(a=0;a<i;a++){
            if(data[a].kelas==key){
                ketemu=true;
                data1[jumlah]=data[a];
                jumlah++;
            }
        }
        if(ketemu){
            cout << "Kelas [" << key << "] ditemukan" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            cout << "No.  Nama                NIM         Kelas         Nilai       Nilai        Nilai        Rata-      Grade  " << endl;
            cout << "                                               Struktur Data  Jar.kom       P.Web        Rata              " << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
            for (a = 0; a < jumlah; a++)
            {
                cout << setiosflags(ios::left) << setw(5) << a + 1;
                cout << setiosflags(ios::left) << setw(20) << data1[a].nama;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nim;
                cout << setiosflags(ios::left) << setw(15) << data1[a].kelas;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai1;
                cout << setiosflags(ios::left) << setw(13) << data1[a].nilai2;
                cout << setiosflags(ios::left) << setw(12) << data1[a].nilai3;
                cout << setiosflags(ios::left) << setw(12) << data1[a].RataRata;
                cout << setiosflags(ios::left) << setw(06) << data1[a].grade << endl;
            }
            cout << "\n\nJumlah : " << jumlah << endl;
            cout << "-----------------------------------------------------------------------------------------------------------" << endl;
        
        }
        else{
            cout << "\nKelas [" << key << "] tidak ditemukan" << endl;
        }
    }
}

// fungsi untuk menghapus data
void hapusdata()
{
    int hapus, a;
    system("cls");
    cout << "+----------------------+" << endl;
    cout << "|      HAPUS DATA      |" << endl;
    cout << "+----------------------+\n"
         << endl;

    lihatdata();
    cout << "Nomor yang akan di hapus: ";
    cin >> hapus;

    if (hapus > i)
    {
        cout << "\nDATA GAGAL DI HAPUS\n"
             << endl;
        getch();
    }
    else
    {
        a = hapus - 1;
        i--;
        for (int b = a; b < i; b++)
        {
            data[b] = data[b + 1];
        }
        cout << "\nDATA BERHASIL DIHAPUS\n"
             << endl;
        getch();
    }

    lihatdata();
    getch();
}
