#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include<string.h>


using namespace std;


struct mhs
{
    int i, nim;
    //string nama, prodi, kelas, asal;
    string Grade;
    char nama[100];
    char prodi[100];
    char asal[100];
    float nilai1, nilai2, nilai3, nilai4, nilai5, hasil;
}; 


int main() {
	
	
	
	int i, J, j, y, pilih;

	
	char input;
 mhs jumlah[50];	
	mhs temp;
	
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
		cout << "NIM Mahasiswa       : "; 	cin >> jumlah[i].nim;		
		cout << "Nama Mahasiswa      : "; 	cin >> jumlah[i].nama;
		cout << "Nama Prodi          : "; 	cin >> jumlah[i].prodi;
		cout << "Asal Kota           : "; 	cin >> jumlah[i].asal;
		cout << "Nilai UTS           : "; 	cin >> jumlah[i].nilai1;
		cout << "Nilai UAS           : "; 	cin >> jumlah[i].nilai2;
		cout << "Nilai Praktek       : "; 	cin >> jumlah[i].nilai3;
		//cout << "Nilai Nilai Akhir   : "; 	cin >> jumlah[i].nilai4;
		jumlah[i].hasil =  (0.25 * jumlah[i].nilai1) + (0.5 * jumlah[i].nilai2) +(0.25 * jumlah[i].nilai3);
		cout<<endl;

	/*{
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
	}//penutup grade*/
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
cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
cout << "                                                                  UTS       UAS     Praktek                                  \n";
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
	//cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
	//cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
	/*cout << setprecision(4) <<"     "	       << jumlah[i].Grade*/ 
	cout <<endl;
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
	cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
	cout << "                                                                  UTS       UAS     Praktek                                  \n";
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
	//cout << setprecision(4) <<"        "	   << jumlah[i].nilai4;
	//cout << setprecision(4) <<"       "		   << jumlah[i].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[i].hasil;
	/*cout << setprecision(4) <<"     "	       << jumlah[i].Grade*/ 
	cout <<endl;
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
	cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
	cout << "                                                                  UTS       UAS     Praktek                                  \n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	for(int b=1; b<=J ;b++)
	{
	cout << setiosflags(ios::left) << setw(4)  << b;
	cout << setiosflags(ios::left) << setw(11) << jumlah[b].nim;
	cout << setiosflags(ios::left) << setw(17) << jumlah[b].nama;
	cout << setiosflags(ios::left) << setw(17) << jumlah[b].prodi;
	cout << setiosflags(ios::left) << setw(17) << jumlah[b].asal;
	cout << setprecision(4) <<" "			   << jumlah[b].nilai1;
	cout << setprecision(4) <<"        "	   << jumlah[b].nilai2;
	cout << setprecision(4) <<"        "	   << jumlah[b].nilai3;
	cout << setprecision(4) <<"        "	   << jumlah[b].nilai4;
	cout << setprecision(4) <<"       "		   << jumlah[b].nilai5;
	cout << setprecision(4) <<"      "		   << jumlah[b].hasil;
	/*cout << setprecision(4) <<"     "	       << jumlah[b].Grade*/ 
	cout <<endl; cout<<endl;
	}	

		
		
		
		

                //sorting (buble sort) berdasarkan nim
                for(i=1; i<=J-1; i++)
                {
                        for(j=1; j<=J-1-i; j++)
                        {
                                if(jumlah[j].nim>jumlah[j+1].nim)
                                {
                                        //tukar nim
                                        temp.nim=jumlah[j].nim;
                                        jumlah[j].nim=jumlah[j+1].nim;
                                        jumlah[j+1].nim=temp.nim;
                                        //tukar nama
                                        strcpy(temp.nama, jumlah[j].nama);
                                        strcpy(jumlah[j].nama, jumlah[j+1].nama);
                                        strcpy(jumlah[j+1].nama, temp.nama);
                                        //tukar prodi
                                        strcpy(temp.prodi, jumlah[j].prodi);
                                        strcpy(jumlah[j].prodi, jumlah[j+1].prodi);
                                        strcpy(jumlah[j+1].prodi, temp.prodi);
                                        //tukar asal mhs
                                        strcpy(temp.asal, jumlah[j].asal);
                                        strcpy(jumlah[j].asal, jumlah[j+1].asal);
                                        strcpy(jumlah[j+1].asal, temp.asal);
                                        //tukar UTS
                                        temp.nilai1=jumlah[j].nilai1;
                                        jumlah[j].nilai1=jumlah[j+1].nilai1;
                                        jumlah[j+1].nilai1=temp.nilai1;
                                        //tukar UAS
                                        temp.nilai2=jumlah[j].nilai2;
                                        jumlah[j].nilai2=jumlah[j+1].nilai2;
                                        jumlah[j+1].nilai2=temp.nilai2;
                                        //tukar Praktek
                                        temp.nilai3=jumlah[j].nilai3;
                                        jumlah[j].nilai3=jumlah[j+1].nilai3;
                                        jumlah[j+1].nilai3=temp.nilai3;
                                        //tukar nilai akhir
                                        temp.hasil=jumlah[j].hasil;
                                        jumlah[j].hasil=jumlah[j+1].hasil;
                                        jumlah[j+1].hasil=temp.hasil;
                                }
                        }
                }
                
                
                
                
                 //data setelah urut
            cout<<"\nNIM setelah diurutkan  : "<<endl;
       
        
           	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
			cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
			cout << "                                                                  UTS       UAS     Praktek                                  \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			for(int c=1; c<=J; c++)
			//for( i=1; i<=J; i++)
				{
					cout << setiosflags(ios::left) << setw(4)  << c;
					cout << setiosflags(ios::left) << setw(11) << jumlah[c].nim;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].nama;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].prodi;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].asal;
					cout << setprecision(4) <<" "			   << jumlah[c].nilai1;
					cout << setprecision(4) <<"        "	   << jumlah[c].nilai2;
					cout << setprecision(4) <<"        "	   << jumlah[c].nilai3;
					//cout << setprecision(4) <<"        "	   << jumlah[c].nilai4;
					//cout << setprecision(4) <<"       "		   << jumlah[c].nilai5;
					cout << setprecision(4) <<"      "		   << jumlah[c].hasil;
					//cout << setprecision(4) <<"     "	       << jumlah[c].Grade 
					cout <<endl; cout<<endl;
				}
                
                
                
                
                
        }
		
		
		
		
		
		
		
		
		
		
		
		

 		
        
       

		getch();
		goto menu;
}//penutup 4



//}

