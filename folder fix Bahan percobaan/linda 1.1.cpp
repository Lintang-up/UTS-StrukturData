#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

struct nilai //record
{
	int i, nim;
	string nama, prodi, grade;
	float nilaipresen, nilaitugas, nilaipraktek, nilaiuts, nilaiuas, nilaiakhir;
};
	
		
int main()
{
int i;
int a, j, pilih, jumlahmhs, menu;
	nilai mahasiswa [100];
	nilai temp[100];
	
	menu:
	system ("cls");
	cout << "===================================" << "\n";
	cout << "|     PROGRAM NILAI MAHASISWA     |" << "\n";
	cout << "===================================" << "\n";
	cout << "|Menu:                            |" << "\n";
	cout << "|1. Input Data Mahasiswa          |" << "\n";
	cout << "|2. Pengurutan Data NIM Mahasiswa |" << "\n";
	cout << "|3. Pencarian Data Mahasiswa      |" << "\n";
	cout << "|4. Keluar                        |" << "\n";
	cout << "===================================" << "\n";
	cout << "Pilih Nomor Menu: "; cin >> pilih;
	
	if(pilih == 1){ // input data
		{
		system ("cls");
		cout << "==================================================" << "\n";
		cout << "|                 DATA MAHASISWA                 |" << "\n";
		cout << "==================================================" << "\n";
		cout << "Masukkan Jumlah Mahasiswa: "; cin >> jumlahmhs;
		for(i=0; i<jumlahmhs; i++)
			{
			cout << "Mahasiswa ke-" << i + 1 << "\n";
			cout << "NIM            : "; cin >> mahasiswa[i].nim;
			cout << "Nama Mahasiswa : "; cin >> mahasiswa[i].nama;
			cout << "Program Studi  : "; cin >> mahasiswa[i].prodi;
			cout << "Nilai Presensi : "; cin >> mahasiswa[i].nilaipresen;
			cout << "Nilai Tugas    : "; cin >> mahasiswa[i].nilaitugas;
			cout << "Nilai Praktek  : "; cin >> mahasiswa[i].nilaipraktek;
			cout << "Nilai UTS      : "; cin >> mahasiswa[i].nilaiuts;
			cout << "Nilai UAS      : "; cin >> mahasiswa[i].nilaiuas;
			//cout << "Nilai Akhir    : "; cin >> mahasiswa[i].nilaiakhir;
			mahasiswa[i].nilaiakhir = (0.10 * mahasiswa[i].nilaipresen) + (0.15 * mahasiswa[i].nilaitugas) + (0.15 * mahasiswa[i].nilaipraktek) + (0.3 * mahasiswa[i].nilaiuts) + (0.3 * mahasiswa[i].nilaiuas);
        	cout << "\n";
        	
			if (mahasiswa[i].nilaiakhir >= 80 && mahasiswa[i].nilaiakhir <= 100) {
            	mahasiswa[i].grade = "A";
        	}
        	else if (mahasiswa[i].nilaiakhir >= 68 && mahasiswa[i].nilaiakhir <= 79) {
            	mahasiswa[i].grade = "B";
        	}
      		else if (mahasiswa[i].nilaiakhir >= 56 && mahasiswa[i].nilaiakhir <= 67) {
            	mahasiswa[i].grade = "C";
        	}
        	else if (mahasiswa[i].nilaiakhir >= 45 && mahasiswa[i].nilaiakhir <= 55) {
            	mahasiswa[i].grade = "D";
        	}
        	else if (mahasiswa[i].nilaiakhir >= 0 && mahasiswa[i].nilaiakhir <= 44) {
            	mahasiswa[i].grade = "E";
    		}  	
		}
		getch();
	}
		goto menu;
}
	
	else if (pilih == 2){
		//data belum terurut
		system("cls");
		cout << "\nData sebelum diurutkan : " << "\n";
		cout << "=========================================================================================================================\n";
		cout << "No. Nim          Nama           Program                                  Nilai                              Nilai        \n";
		cout << "               Mahasiswa         Studi       -------------------------------------------------------------  Akhir   Grade\n";
		cout << "                                                Presensi       Tugas        Praktek        UTS       UAS                 \n";
		cout << "=========================================================================================================================\n";
		for(int a=0; a<i; a++)
		{
		cout << setiosflags(ios::left) << setw(4)  << a + 1;
		cout << setiosflags(ios::left) << setw(11) << mahasiswa[a].nim;
		cout << setiosflags(ios::left) << setw(17) << mahasiswa[a].nama;
		cout << setiosflags(ios::left) << setw(17) << mahasiswa[a].prodi;
		cout << setprecision(4) <<" "			   << mahasiswa[a].nilaipresen;
		cout << setprecision(4) <<"        "	   << mahasiswa[a].nilaitugas;
		cout << setprecision(4) <<"        "	   << mahasiswa[a].nilaipraktek;
		cout << setprecision(4) <<"        "	   << mahasiswa[a].nilaiuts;
		cout << setprecision(4) <<"       "		   << mahasiswa[a].nilaiuas;
		cout << setprecision(4) <<"      "		   << mahasiswa[a].nilaiakhir;
		cout << setprecision(4) <<"     "	       << mahasiswa[a].grade << endl;
		cout << "\n";
		}
		getch();	
	{
	
		pilih:
		system ("cls");
		cout << "===============================" << "\n";
		cout << "|       PILIHAN SORTING       |" << "\n";
		cout << "===============================" << "\n";
		cout << "|1. Berdasarkan NIM           |" << "\n";
		cout << "|2. Berdasarkan Nilai Akhir   |" << "\n";
		cout << "===============================" << "\n";
		cout << "Pilih Nomor: "; cin >> pilih;
		
		if(pilih == 1)
		{
		// buble sort berdasarkan nim
		for (int a=1; a<i; a++) {
		for (int j=0; j<i - a; j++) {
		if(mahasiswa[j].nim>mahasiswa[j+1].nim)
        {
        // tukar nim
        temp[j].nim=mahasiswa[j].nim;
        mahasiswa[j].nim=mahasiswa[j+1].nim;
        mahasiswa[j+1].nim=temp[j].nim;
        // tukar nama
        temp[j].nama= mahasiswa[j].nama;
    	mahasiswa[j].nama= mahasiswa[j+1].nama;
        mahasiswa[j+1].nama= temp[j].nama;
        // tukar program studi
        temp[j].prodi= mahasiswa[j].prodi;
        mahasiswa[j].prodi= mahasiswa[j+1].prodi;
        mahasiswa[j+1].prodi= temp[j].prodi;
        // tukar presensi
        temp[j].nilaipresen= mahasiswa[j].nilaipresen;
        mahasiswa[j].nilaipresen= mahasiswa[j+1].nilaipresen;
        mahasiswa[j+1].nilaipresen= temp[j].nilaipresen;
        // tukar tugas
        temp[j].nilaitugas=mahasiswa[j].nilaitugas;
        mahasiswa[j].nilaitugas=mahasiswa[j+1].nilaitugas;
        mahasiswa[j+1].nilaitugas=temp[j].nilaitugas;
		// tukar praktek
        temp[j].nilaipraktek=mahasiswa[j].nilaipraktek;
        mahasiswa[j].nilaipraktek=mahasiswa[j+1].nilaipraktek;
        mahasiswa[j+1].nilaipraktek=temp[j].nilaipraktek;
		// tukar UTS
        temp[j].nilaiuts=mahasiswa[j].nilaiuts;
        mahasiswa[j].nilaiuts=mahasiswa[j+1].nilaiuts;
        mahasiswa[j+1].nilaiuts=temp[j].nilaiuts;
        // tukar UAS
        temp[j].nilaiuas=mahasiswa[j].nilaiuas;
        mahasiswa[j].nilaiuas=mahasiswa[j+1].nilaiuas;
        mahasiswa[j+1].nilaiuas=temp[j].nilaiuas;
        // tukar nilai akhir
        temp[j].nilaiakhir=mahasiswa[j].nilaiakhir;
        mahasiswa[j].nilaiakhir=mahasiswa[j+1].nilaiakhir;
        mahasiswa[j+1].nilaiakhir=temp[j].nilaiakhir;
        // tukar grade
        temp[j].grade = mahasiswa[j].grade;
        mahasiswa[j].grade = mahasiswa[j+1].grade;
        mahasiswa[j+1].grade= temp[j].grade;
		}
	}
}
		//data setelah terurut
    	cout << "\nData NIM setelah diurutkan" << "\n";
		cout << "=========================================================================================================================\n";
		cout << "No. Nim          Nama           Program                                  Nilai                                           \n";
		cout << "               Mahasiswa         Studi       -------------------------------------------------------------  Jumlah  Grade\n";
		cout << "                                                Presensi       Tugas        Praktek        UTS       UAS                 \n";
		cout << "=========================================================================================================================\n";
		for(int a = 0; a<i; a++)
		{
		cout << setiosflags(ios::left) << setw(4)   << a + 1;
		cout << setiosflags(ios::left) << setw(11)  << mahasiswa[a].nim;
		cout << setiosflags(ios::left) << setw(17)  << mahasiswa[a].nama;
		cout << setiosflags(ios::left) << setw(17)  << mahasiswa[a].prodi;
		cout << setprecision(4) <<" "		    	<< mahasiswa[a].nilaipresen;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaitugas;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaipraktek;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaiuts;
		cout << setprecision(4) <<"       "		    << mahasiswa[a].nilaiuas;
		cout << setprecision(4) <<"      "		    << mahasiswa[a].nilaiakhir;
		cout << setprecision(4) <<"     "	        << mahasiswa[a].grade << endl;
		}
		getch();
		goto menu;
    } 
		else if(pilih == 2)
   	 	{
    	// buble sort berdasarkan nilai akhir
		for (int a=1; a<i; a++) {
		for (int j=0; j<i - a; j++){
    	if(mahasiswa[j].nilaiakhir>mahasiswa[j+1].nilaiakhir)
        {
        // tukar nim
        temp[j].nim=mahasiswa[j].nim;
        mahasiswa[j].nim=mahasiswa[j+1].nim;
        mahasiswa[j+1].nim=temp[j].nim;
        // tukar nama
        temp[j].nama= mahasiswa[j].nama;
    	mahasiswa[j].nama= mahasiswa[j+1].nama;
        mahasiswa[j+1].nama= temp[j].nama;
        // tukar program studi
        temp[j].prodi= mahasiswa[j].prodi;
        mahasiswa[j].prodi= mahasiswa[j+1].prodi;
        mahasiswa[j+1].prodi= temp[j].prodi;
        // tukar presensi
        temp[j].nilaipresen= mahasiswa[j].nilaipresen;
        mahasiswa[j].nilaipresen= mahasiswa[j+1].nilaipresen;
        mahasiswa[j+1].nilaipresen= temp[j].nilaipresen;
        // tukar tugas
        temp[j].nilaitugas=mahasiswa[j].nilaitugas;
        mahasiswa[j].nilaitugas=mahasiswa[j+1].nilaitugas;
        mahasiswa[j+1].nilaitugas=temp[j].nilaitugas;
		// tukar praktek
        temp[j].nilaipraktek=mahasiswa[j].nilaipraktek;
        mahasiswa[j].nilaipraktek=mahasiswa[j+1].nilaipraktek;
        mahasiswa[j+1].nilaipraktek=temp[j].nilaipraktek;
		// tukar UTS
        temp[j].nilaiuts=mahasiswa[j].nilaiuts;
        mahasiswa[j].nilaiuts=mahasiswa[j+1].nilaiuts;
        mahasiswa[j+1].nilaiuts=temp[j].nilaiuts;
        // tukar UAS
        temp[j].nilaiuas=mahasiswa[j].nilaiuas;
        mahasiswa[j].nilaiuas=mahasiswa[j+1].nilaiuas;
        mahasiswa[j+1].nilaiuas=temp[j].nilaiuas;
        // tukar nilai akhir
        temp[j].nilaiakhir=mahasiswa[j].nilaiakhir;
        mahasiswa[j].nilaiakhir=mahasiswa[j+1].nilaiakhir;
        mahasiswa[j+1].nilaiakhir=temp[j].nilaiakhir;
        // tukar grade
        temp[j].grade = mahasiswa[j].grade;
        mahasiswa[j].grade = mahasiswa[j+1].grade;
        mahasiswa[j+1].grade= temp[j].grade;
		}
    }
}
		//data setelah terurut
    	cout << "\nData Nilai Akhir setelah diurutkan" << "\n";
		cout << "=========================================================================================================================\n";
		cout << "No. Nim          Nama           Program                                  Nilai                                           \n";
		cout << "               Mahasiswa         Studi       -------------------------------------------------------------  Jumlah  Grade\n";
		cout << "                                                Presensi       Tugas        Praktek        UTS       UAS                 \n";
		cout << "=========================================================================================================================\n";
		for(int a = 0; a<i; a++)
		{
		cout << setiosflags(ios::left) << setw(4)   << a + 1;
		cout << setiosflags(ios::left) << setw(11)  << mahasiswa[a].nim;
		cout << setiosflags(ios::left) << setw(17)  << mahasiswa[a].nama;
		cout << setiosflags(ios::left) << setw(17)  << mahasiswa[a].prodi;
		cout << setprecision(4) <<" "		    	<< mahasiswa[a].nilaipresen;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaitugas;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaipraktek;
		cout << setprecision(4) <<"        "		<< mahasiswa[a].nilaiuts;
		cout << setprecision(4) <<"       "		    << mahasiswa[a].nilaiuas;
		cout << setprecision(4) <<"      "		    << mahasiswa[a].nilaiakhir;
		cout << setprecision(4) <<"     "	        << mahasiswa[a].grade << endl;
		}
		getch();
    }
    	getch();
		goto menu;
	}	
}

    //searching squential
	else if(pilih == 3){
	system("cls");
	int i, x;
	bool found;
	
	cout << "NIM yang ingin dicari = ";		cin >> x;
	cout << "\n";
	
	found =false;
	i=0;
	while ((i<50)&(!found))

	//program searching
	{
    	if (mahasiswa[i].nim==x)
    	found=true;
    	else
    	i=i+1;
	}
	if(found){
	cout << "NIM: "<<x<<"  Ditemukan  " <<endl;
	cout << "=========================================================================================================================\n";
	cout << "No. Nim          Nama           Program                                  Nilai                                           \n";
	cout << "               Mahasiswa         Studi       -------------------------------------------------------------  Jumlah  Grade\n";
	cout << "                                                Presensi       Tugas        Praktek        UTS       UAS                 \n";
	cout << "=========================================================================================================================\n";
	{
	cout << setiosflags(ios::left) << setw(4)   << i;
	cout << setiosflags(ios::left) << setw(11)  << mahasiswa[i].nim;
	cout << setiosflags(ios::left) << setw(17)  << mahasiswa[i].nama;
	cout << setiosflags(ios::left) << setw(17)  << mahasiswa[i].prodi;
	cout << setprecision(4) <<" "		    	<< mahasiswa[i].nilaipresen;
	cout << setprecision(4) <<"        "		<< mahasiswa[i].nilaitugas;
	cout << setprecision(4) <<"        "		<< mahasiswa[i].nilaipraktek;
	cout << setprecision(4) <<"        "		<< mahasiswa[i].nilaiuts;
	cout << setprecision(4) <<"       "		    << mahasiswa[i].nilaiuas;
	cout << setprecision(4) <<"      "		    << mahasiswa[i].nilaiakhir;
	cout << setprecision(4) <<"     "	        << mahasiswa[i].grade;
	}
}
	else
	cout << "NIM  "<<x<<"  tidak ditemukan";
	getch();
	goto menu;
}
	 else if(pilih == 4) {
	 	system("cls");
	    cout << "Nama	: Linda Prasetyaningsih" << "\n";
        cout << "NIM	: 210103022" << "\n";
        cout << "Kelas	: 21 TIA1" << "\n";
        getch();
	}
	
}
	

