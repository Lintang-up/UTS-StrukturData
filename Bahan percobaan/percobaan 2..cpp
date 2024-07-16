#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;


struct mhs
{
    int i, nim;
    string nama, prodi, kelas, asal;
    string Grade;
    float nilai1, nilai2, nilai3, nilai4, nilai5, hasil;
}; 


int main() {
	
	int tmp;
	
	int i, J, pilih;
	char input;
 mhs jumlah[50];	

	menu:
	system("cls");
    cout << "+-------------------------------+" << endl;
    cout << "|     PROGRAM Struktur Data     |" << endl;
    cout << "+-------------------------------+" << endl;
    cout << "|Menu:                          |" << endl;
    cout << "|1. Input Data MHS              |" << endl;
    cout << "|2. Daftar Nama MHS             |" << endl;
    cout << "|3. Searching (NIM Mhs)         |" << endl;
    cout << "|4. Sorting                     |" << endl;
    cout << "|5. Keluar                      |" << endl;
    cout << "+-------------------------------+" << endl;
    cout <<  "Pilih Nomor Menu: ";
    cin >> pilih;

 if(pilih == 1){
        {
		system("cls");	
		cout << "\n";
		cout << "Masukan Jumlah Mahasiswa : "; cin >> J;
		cout << "\n";
		for(i=1; i<=J ;i++)

{
		cout << "\n";
		cout << "Mahasiswa Ke - " 			<< i <<endl;
		cout << "Nama Mahasiswa      : "; 	cin >> jumlah[i].nama;
		cout << "NIM Mahasiswa       : "; 	cin >> jumlah[i].nim;
		cout << "Nama Prodi          : "; 	cin >> jumlah[i].prodi;
		cout << "Asal Kota           : "; 	cin >> jumlah[i].asal;
		cout << "Nilai Struktur data : "; 	cin >> jumlah[i].nilai1;
		cout << "Nilai Jarkom        : "; 	cin >> jumlah[i].nilai2;
		cout << "Nilai Allinear      : "; 	cin >> jumlah[i].nilai3;
		cout << "Nilai Elektro       : "; 	cin >> jumlah[i].nilai4;
		cout << "Nilai Pweb          : "; 	cin >> jumlah[i].nilai5;
		jumlah[i].hasil =  jumlah[i].nilai1 + jumlah[i].nilai2 + jumlah[i].nilai3 + jumlah[i].nilai4 + jumlah[i].nilai5;
		cout<<endl;

	{
        if(jumlah[i].hasil >= 450 && jumlah[i].hasil <= 500){
            jumlah[i].Grade = "A";
        }
        else if(jumlah[i].hasil >= 400 && jumlah[i].hasil <= 449) {
            jumlah[i].Grade = "B";
        }
        else if(jumlah[i].hasil >= 350 && jumlah[i].hasil <= 399) {
            jumlah[i].Grade = "C";
        }
        else if(jumlah[i].hasil >= 300 && jumlah[i].hasil <= 349) {
            jumlah[i].Grade = "D";
        }
        else if(jumlah[i].hasil >= 200 && jumlah[i].hasil <= 299) {
            jumlah[i].Grade = "E";
        }  
        else if(jumlah[i].hasil >= 1 && jumlah[i].hasil <= 199) {
            jumlah[i].Grade = "F";
        }  
	}//penutup grade
}//penutup mahasiswa ke
		cout << "\n\n tekan untuk kembali ke Menu";
		getch();
}//penutup masukkan jumlah mhs
        goto menu;
}//penutup pilih 1



else if(pilih == 2){
//output
system("cls");
cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------  Jumlah  Grade\n";
cout << "                                                               StrukData   Jarkom   Allinear   Elektro   P-web               \n";
cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
for(i=1; i<=J ;i++)
	{
	cout << setiosflags(ios::left) << setw(4)  << i;
	cout << setiosflags(ios::left) << setw(11) << jumlah[i].nim;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].nama;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].prodi;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].asal;
	cout << setprecision(4) <<" "			   << jumlah[i].nilai1;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai2;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai3;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
	cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
	cout << setprecision(4) <<"     "	       << jumlah[i].Grade <<endl;
	}	
getch();
goto menu;
}//penutup ke 2



//searching Squential
else if(pilih == 3){
	system("cls");
	int i, k;
	bool found;
	
	cout << "NIM yang ingin dicari = ";		cin >> k;
	cout << "\n";
	
	found =false;
	i=0;
	while ((i<50)&(!found))

	//Program Searching
	{
    	if (jumlah[i].nim==k)
    	found=true;
    	else
    	i=i+1;
	}
if(found){
	cout << "NIM: "<<k<<"  Ditemukan  " <<endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
	cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------  Jumlah  Grade\n";
	cout << "                                                               StrukData   Jarkom   Allinear   Elektro   P-web               \n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	{
	cout << setiosflags(ios::left) << setw(4)  << i;
	cout << setiosflags(ios::left) << setw(11) << jumlah[i].nim;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].nama;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].prodi;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].asal;
	cout << setprecision(4) <<" "			   << jumlah[i].nilai1;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai2;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai3;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
	cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
	cout << setprecision(4) <<"     "	       << jumlah[i].Grade <<endl;
	}
}
else
	cout<<"NIM  "<<k<<"  tidak ada dalam data";
	getch();
	goto menu;
}//penutup 3



else if(pilih == 4){
	
	
	
	system("cls");
	cout << "\nData sebelum diurutkan : "<<endl; //Output Data Yang Di Input
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
	cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------  Jumlah  Grade\n";
	cout << "                                                               StrukData   Jarkom   Allinear   Elektro   P-web               \n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	for(i=1; i<=J ;i++)
	{
	cout << setiosflags(ios::left) << setw(4)  << i;
	cout << setiosflags(ios::left) << setw(11) << jumlah[i].nim;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].nama;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].prodi;
	cout << setiosflags(ios::left) << setw(17) << jumlah[i].asal;
	cout << setprecision(4) <<" "			   << jumlah[i].nilai1;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai2;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai3;
	cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
	cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
	cout << setprecision(4) <<"     "	       << jumlah[i].Grade <<endl; cout<<endl;
	}	
	
	
	//for( i=0;i<k;i++)//Disini Proses Bubble Sort
	for(i=1; i<=J ;i++)
      {
          //for(j=i+1;j<k;j++)
          for(i=1; i<=J ;i++)
          {
               if(jumlah[i].nim>jumlah[i].nim)
             {
                 tmp=jumlah[i].nim;
                 jumlah[i].nim=jumlah[i].nim;
                 jumlah[i].nim=tmp;
             }
         }
      }
         cout<<"\nData setelah diurutkan  : "<<endl;
       //for(i=0; i<k; i++)
       for(i=1; i<=J ;i++)
       {
        {
           	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
			cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------  Jumlah  Grade\n";
			cout << "                                                               StrukData   Jarkom   Allinear   Elektro   P-web               \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			for(i=1; i<=J ;i++)
			{
			cout << setiosflags(ios::left) << setw(4)  << i;
			cout << setiosflags(ios::left) << setw(11) << jumlah[i].nim;
			cout << setiosflags(ios::left) << setw(17) << jumlah[i].nama;
			cout << setiosflags(ios::left) << setw(17) << jumlah[i].prodi;
			cout << setiosflags(ios::left) << setw(17) << jumlah[i].asal;
			cout << setprecision(4) <<" "			   << jumlah[i].nilai1;
			cout << setprecision(4) <<"        "	   << jumlah[i].nilai2;
			cout << setprecision(4) <<"        "	   << jumlah[i].nilai3;
			cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
			cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
			cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
			cout << setprecision(4) <<"     "	       << jumlah[i].Grade <<endl; cout<<endl;
			}	
        }
       }
	
	
	
}//penutup 4



}

