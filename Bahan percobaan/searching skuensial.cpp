#include<iostream>
#include<string.h>
#include<stdlib.h>
 
using namespace std;
 
typedef struct
{
int nidk;
char nama[25];
char alamat[25];
char golongan[1];
}mahasiswa;
 
mahasiswa mhs[10];
 
int main()
{
for (int i=0; i<10; i++)
{
    cout<<"mahasiswa ke : "<<i+1;
    cout<<" \n";
    cout<<"Nomor Induk : ";
    cin>>mhs[i].nidk;
    cout<<"Nama : ";
    cin>>mhs[i].nama;
    cout<<"alamat : ";
    cin>>mhs[i].alamat;
    cout<<"Golongan : ";
    cin>>mhs[i].golongan;
    system("clear");
}
 
int i, k;
bool found;
cout<<"Nilai yang dicari= ";
cin >>k;
found =false;
i=0;
while ((i<10)&(!found))
{
    if (mhs[i].nidk==k)
    found=true;
    else
    i=i+1;
}
if(found){
cout<<"nim: "<<k<<"Ditemukan  ";
cout<<"\n";
cout<<"Nim : "<<mhs[i].nidk;
cout<<"\n";
cout<<"Nama : "<<mhs[i].nama;
cout<<"\n";
cout<<"Alamat : "<<mhs[i].alamat;
cout<<"\n";
cout<<"Golongan : "<<mhs[i].golongan;
}
else
cout<<"nim "<<k<<"tidak ada dalam data";
}
