#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

struct mahasiswa
{
    int nim;
    string nama, kelas;
};
mahasiswa data[10];
int i;

void inputdata();
void lihatdata();
void hapusdata();

main()
{
    int nomor;
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
    if (nomor == 1)
    {
        inputdata();
        goto menu;
    }
    else if (nomor == 2)
    {
        system("cls");
        cout << "+----------------------+" << endl;
        cout << "|      LIHAT DATA      |" << endl;
        cout << "+----------------------+\n"<< endl;
        lihatdata();
        getch();
        goto menu;
    }
    else if (nomor == 5)
    {
        hapusdata();
        goto menu;
    }
}

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
        cout << "Nama   : ";
        fflush(stdin);
        getline(cin, data[i].nama);
        // cin >> data[i].nama;
        cout << "NIM    : ";
        cin >> data[i].nim;
        cout << "Kelas  : ";
        cin >> data[i].kelas;
        cout << "\n";
        i++;
    }
    getch();
}

void lihatdata()
{
    cout << "-----------------------------------------------" << endl;
    cout << "No.  Nama                NIM         Kelas     " << endl;
    cout << "-----------------------------------------------" << endl;
    for (int a = 0; a < i; a++)
    {
        cout << setiosflags(ios::left) << setw(5) << a + 1;
        cout << setiosflags(ios::left) << setw(20) << data[a].nama;
        cout << setiosflags(ios::left) << setw(12) << data[a].nim;
        cout << setiosflags(ios::left) << setw(10) << data[a].kelas << endl;
    }
    cout << "-----------------------------------------------" << endl;
}

void hapusdata()
{
    int hapus, a;
    system("cls");
    cout << "+----------------------+" << endl;
    cout << "|      HAPUS DATA      |" << endl;
    cout << "+----------------------+\n"<< endl;

    lihatdata();
    cout << "Nomor yang akan di hapus: ";
    cin >> hapus;

    if (hapus > i)
    {
        cout << "\nDATA GAGAL DI HAPUS\n" << endl;
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
        cout << "\nDATA BERHASIL DIHAPUS\n" << endl;
        getch();
    }

    lihatdata();
    getch();
}
