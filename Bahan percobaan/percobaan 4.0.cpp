#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <string.h>


using namespace std;


struct mhs
{
    long int nim;
    string Grade;
    string nama;
    string prodi;
    string asal;
    float nilai1, nilai2, nilai3, hasil;
}; 


mhs jumlah[100];	//deklarasi array record	
mhs temp[100];		//deklarasi buble sort
int i;
	
//deklarasi fungsi pada menu
void inputdata();
void lihatdata();
void bubble();
void sequentialsearch();


int main() {
	//int i, J, j;
	int pilih;
	int nomor;

	
	//char input;

	
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
    
    //menu input data mhs
    if (pilih == 1)
    {
    	system("cls");
        inputdata();
        goto menu;
    }

    //menu untuk melihat data
    else if (pilih == 2)
    {
        system("cls");
        lihatdata();
        getch();
        goto menu;
    }

    //menu search(sequential search)
    else if (pilih == 3)
    {
        system("cls");
        sequentialsearch();
        getch();
        goto menu;
    }

    //menu sorting(bubble sort)
    else if (pilih == 4)
    {
        system("cls;");
        cout << "+-------------------------------+" << endl;
        cout << "|      BUBBLE SORT Ascending    |" << endl;
        cout << "+-------------------------------+" << endl;
        bubble();
        getch();
        goto menu;
    }

	//menu keluar
    else if(pilih == 5)
	{
		system("cls;");
        cout << "Trimakasih dan janganlupa belajar\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    }
}
    
    
    
    
    

 void inputdata()
 {
 	 int J; //deklarasi perulangan 
	 int a;
	system("cls");	
	cout << "\n";
	cout << "Masukan Jumlah Mahasiswa : "; cin >> J;
	cout << "\n";
	
	for(a=0; a<J; a++)
	{
		cout << "\n";
		cout << "Mahasiswa Ke - " 			<< i + 1 <<endl;
		cout << "NIM Mahasiswa       : "; 	cin >> jumlah[i].nim;		
		cout << "Nama Mahasiswa      : "; 	fflush(stdin); getline(cin, jumlah[i].nama);	//cin >> jumlah[i].nama;
		cout << "Nama Prodi          : "; 	cin >> jumlah[i].prodi;
		cout << "Asal Kota           : "; 	cin >> jumlah[i].asal;
		cout << "Nilai UTS           : "; 	cin >> jumlah[i].nilai1;
		cout << "Nilai UAS           : "; 	cin >> jumlah[i].nilai2;
		cout << "Nilai Praktek       : "; 	cin >> jumlah[i].nilai3;
		jumlah[i].hasil =  (0.25 * jumlah[i].nilai1) + (0.5 * jumlah[i].nilai2) +(0.25 * jumlah[i].nilai3);
		cout<<endl;

	
        if(jumlah[i].hasil >= 90 && jumlah[i].hasil <= 100){
            jumlah[i].Grade = "A";
        }
        else if(jumlah[i].hasil >= 76 && jumlah[i].hasil <= 89) {
            jumlah[i].Grade = "B";
        }
        else if(jumlah[i].hasil >= 60 && jumlah[i].hasil <= 75) {
            jumlah[i].Grade = "C";
        }
        else if(jumlah[i].hasil >= 40 && jumlah[i].hasil <= 59) {
            jumlah[i].Grade = "D";
        }
        else if(jumlah[i].hasil >= 20 && jumlah[i].hasil <= 39) {
            jumlah[i].Grade = "E";
        }  
        else if(jumlah[i].hasil >= 1 && jumlah[i].hasil <= 19) {
            jumlah[i].Grade = "F";
        }  
		i++;
		
}//penutup mahasiswa ke
	cout << "\n\n tekan untuk kembali ke Menu....";
	getch();
}





//output lihat daftar mhs
void lihatdata()
{
	//system("cls");
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
	cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
	cout << "                                                                  UTS       UAS     Praktek                                  \n";
	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
	//for(i=1; i<=J ;i++)
	for (int a = 0; a<i; a++)
	{
		cout << setiosflags(ios::left) << setw(4)  << a + 1;
		cout << setiosflags(ios::left) << setw(11) << jumlah[a].nim;
		cout << setiosflags(ios::left) << setw(17) << jumlah[a].nama;
		cout << setiosflags(ios::left) << setw(17) << jumlah[a].prodi;
		cout << setiosflags(ios::left) << setw(17) << jumlah[a].asal;
		cout << setprecision(4) <<" "			   << jumlah[a].nilai1;
		cout << setprecision(4) <<"        "	   << jumlah[a].nilai2;
		cout << setprecision(4) <<"        "	   << jumlah[a].nilai3;
		cout << setprecision(4) <<"      "		   << jumlah[a].hasil;
		cout << setprecision(4) <<"     "	       << jumlah[a].Grade;
		cout <<endl;
	}
	cout << "-----------------------------------------------------------------------------------------------------------" << endl << endl << endl;
	cout << "tekan untuk lanjut...." << endl;
getch();
}



//searching Squential
void sequentialsearch()
{
    int menuSS;
sequential:
	cout << "+------------------------------+" << endl;
    cout << "|     SEQUENTIAL SEARCHING     |" << endl;
    cout << "+------------------------------+" << endl;
    cout << "|1. Berdasarkan NIM            |" << endl;
    cout << "|2. Berdasarkan Nilai Akhir    |" << endl;
    cout << "+------------------------------+" << endl;
    cout <<  "Pilih nomer: ";
    cin >> menuSS;
	
	if (menuSS == 1)
	{
	//system("cls");
		int a;
		int k;
		//int jmlh = 0;
		bool found;
	
		cout << "NIM yang ingin dicari = ";		cin >> k;
		cout << "\n";
	
		found =false;
		i=0;
		while ((i<100)&(!found))

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
			//for (a = 0; a < jumlah; a++)
			{
				cout << setiosflags(ios::left) << setw(4)  << a + 1;
				cout << setiosflags(ios::left) << setw(11) << jumlah[a].nim;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].nama;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].prodi;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].asal;
				cout << setprecision(4) <<" "			   << jumlah[a].nilai1;
				cout << setprecision(4) <<"        "	   << jumlah[a].nilai2;
				cout << setprecision(4) <<"        "	   << jumlah[a].nilai3;
				cout << setprecision(4) <<"      "		   << jumlah[a].hasil;
				cout << setprecision(4) <<"     "	       << jumlah[a].Grade;
				cout <<endl;
			}
		}
		else
			cout << "NIM  "<<k<<"  tidak ada dalam data\n\n\n";
			cout << "Tekan untuk kembali ke menu.....";
			getch();
		
		
}else if(menuSS == 2)
	{
	//system("cls");
		int a;
		int k;
		int jmlh = 0;
		bool found;
	
		cout << "Nilai Akhir yang ingin dicari = ";		cin >> k;
		cout << "\n";
	
		found =false;
		i=0;
		while ((i<100)&(!found))

		//Program Searching
		{
    		if (jumlah[i].hasil==k)
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
			for (a = 0; a<jmlh; a++)
			{
				cout << setiosflags(ios::left) << setw(4)  << a + 1;
				cout << setiosflags(ios::left) << setw(11) << jumlah[a].nim;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].nama;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].prodi;
				cout << setiosflags(ios::left) << setw(17) << jumlah[a].asal;
				cout << setprecision(4) <<" "			   << jumlah[a].nilai1;
				cout << setprecision(4) <<"        "	   << jumlah[a].nilai2;
				cout << setprecision(4) <<"        "	   << jumlah[a].nilai3;
				cout << setprecision(4) <<"      "		   << jumlah[a].hasil;
				cout << setprecision(4) <<"     "	       << jumlah[a].Grade;
				cout <<endl;
			}
		}
		else
			cout << "Nilai Akhir  "<<k<<"  tidak ada dalam data\n\n\n";
			cout << "Tekan untuk kembali ke menu.....";
			getch();
			
}
}//penutup Searching






void bubble()
{
	system("cls");
	cout << "\nData sebelum diurutkan : "<<endl; //Output Data Yang Di Input
	lihatdata();
	cout << endl;
	/*cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
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
	cout << setprecision(4) <<"      "		   << jumlah[b].hasil;
	cout << setprecision(4) <<"     "	       << jumlah[b].Grade;
	cout <<endl;
	}	*/
	
    // bubble sort secara ascending
    for (int a = 1; a < i; a++)
    {
        for (int b = 0; b <i - a; b++)
        {
            //ascending 
            if (jumlah[b].nim > jumlah[b + 1].nim)
            {
            	//tukar nim
            	temp[b].nim=jumlah[b].nim;
                jumlah[b].nim = jumlah[b+1].nim;
                jumlah[b+1].nim = temp[b].nim;
                
                //tukar nama
                temp[b].nama=jumlah[b].nama;
                jumlah[b].nama = jumlah[b+1].nama;
                jumlah[b+1].nama = temp[b].nama;

				//tukar prodi
                temp[b].prodi=jumlah[b].prodi;
                jumlah[b].prodi = jumlah[b+1].prodi;
                jumlah[b+1].prodi = temp[b].prodi;

				//tukar asal mhs
                temp[b].asal=jumlah[b].asal;
                jumlah[b].asal = jumlah[b+1].asal;
                jumlah[b+1].asal = temp[b].asal;
                
                //tukar niali UTS
                temp[b].nilai1=jumlah[b].nilai1;
                jumlah[b].nilai1 = jumlah[b+1].nilai1;
                jumlah[b+1].nilai1 = temp[b].nilai1;

				//tukar nilai UAS
                temp[b].nilai2=jumlah[b].nilai2;
                jumlah[b].nilai2= jumlah[b+1].nilai2;
                jumlah[b+1].nilai2 = temp[b].nilai2;

				//Tukar nilai Praktek
                temp[b].nilai3=jumlah[b].nilai3;
                jumlah[b].nilai3= jumlah[b+1].nilai3;
                jumlah[b+1].nilai3 = temp[b].nilai3;

				//Tukar nilai Akhir
                temp[b].hasil=jumlah[b].hasil;
                jumlah[b].hasil= jumlah[b+1].hasil;
                jumlah[b+1].hasil = temp[b].hasil;

				//Tukar Grade
                temp[b].Grade=jumlah[b].Grade;
                jumlah[b].Grade= jumlah[b+1].Grade;
                jumlah[b+1].Grade = temp[b].Grade;
            }
        }
    }

    // perulangan untuk menampilkan nim setelah diurutkan
    cout << "NIM SETELAH DI URUTKAN SECARA ASCENDING" << endl;
    lihatdata();
    getch();
}
       
       /*    //data setelah urut
            cout<<"\nNIM setelah diurutkan  : "<<endl;
           	cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			cout << "No. Nim        Nama             Program            Asal                           Nilai                                      \n";
			cout << "    MHS        Mahasiswa         Studi                        ------------------------------------------------   Akhir  Grade\n";
			cout << "                                                                  UTS       UAS     Praktek                                  \n";
			cout << "-----------------------------------------------------------------------------------------------------------------------------\n";
			for(int c=1; c<=J; c++)
			//for(int c=0; c<J; c++)
				{
					cout << setiosflags(ios::left) << setw(4)  << c;
					cout << setiosflags(ios::left) << setw(11) << jumlah[c].nim;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].nama;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].prodi;
					cout << setiosflags(ios::left) << setw(17) << jumlah[c].asal;
					cout << setprecision(4) <<" "			   << jumlah[c].nilai1;
					cout << setprecision(4) <<"        "	   << jumlah[c].nilai2;
					cout << setprecision(4) <<"        "	   << jumlah[c].nilai3;
					cout << setprecision(4) <<"      "		   << jumlah[c].hasil;
					cout << setprecision(4) <<"     "	       << jumlah[c].Grade; 
					cout << endl;
				}             
    }//penutup sorting          */
                
//        getch();
//		goto menu;        
//}//penutup pilih 4

// penutup fungsi utama

