#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
int i, J, index;
string Grade [10];
char nama[5][20];
float nilai1[5], nilai2[5], nilai3[5], hasil[5];
system("cls");
for(i=1; i<=J; i++)


{
cout << "\n";
cout << "Masukan Jumlah Mahasiswa : "; cin >> J;
cout << "\n\n";
for(i=1; i<=J ;i++)

{
cout << "Mahasiswa Ke - " 			<< i <<endl;
cout << "Nama Mahasiswa    : "; 	cin >> nama[i];
cout << "Nilai Tugas       : "; 	cin >> nilai1[i];
cout << "Nilai UTS         : "; 	cin >> nilai2[i];
cout << "Nilai UAS         : "; 	cin >> nilai3[i];


hasil[i] = (nilai1[i] * 0.30)+ (nilai2[i] * 0.30)+ (nilai3[i] * 0.40);
cout<<endl;
{
        if(hasil[i] >= 80 && hasil[i] <= 100){
            Grade[i] = "A";
        }
        else if(hasil[i] >= 70 && hasil[i] <= 79) {
            Grade[i] = "B";
        }
        else if(hasil[i] >= 59 && hasil[i] <= 69) {
            Grade[i] = "C";
        }
        else if(hasil[i] >= 50 && hasil[i] <= 58) {
            Grade[i] = "D";
        }
        else if(hasil[i] >= 0 && hasil[i] <= 49) {
            Grade[i] = "E";
        }  
}

}
}


cout << "---------------------------------------------------------\n";
cout << "No. Nama                        Nilai               Grade\n";
cout << "    Mahasiswa        --------------------------\n";
cout << "                     Tugas   UTS    UAS   Akhir\n";
cout << "---------------------------------------------------------\n";
for(i=1; i<=J ;i++)


{
cout << setiosflags(ios::left) << setw(4) << i;
cout << setiosflags(ios::left) << setw(17) << nama[i];
cout << setprecision(4) <<" "			<< nilai1[i];
cout << setprecision(4) <<"     "		<< nilai2[i];
cout << setprecision(4) <<"     "		<< nilai3[i];
cout << setprecision(4) <<"     "		<< hasil[i];
cout << setprecision(4) <<"         "	<< Grade[i] <<endl;
}


cout << "---------------------------------------------------------\n";
getch();
}
