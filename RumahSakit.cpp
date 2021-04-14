#include <iostream>
#include <conio.h>
main()
{
int biaya;
int lama;
int kamar;
int jasa;
int dibayar;
int total;
int kembali;
int dokter;
char penyakit;
char nama[50];
char alamat[70];
char kelamin[25];

cout<<"-------------------------------------------------------"<<endl;
cout<<"|                RUMAH SAKIT PREMIER                  |"<<endl;
cout<<"|                   JATINEGARA                        |"<<endl;
cout<<"|             SEMUA SPESIALIS DOKTER                  |"<<endl;
cout<<"|           JL. RAYA JATINEGARA  TIMUR                |"<<endl;
cout<<"|           NO.85-87, RT.10 RW 2.                     |"<<endl;
cout<<"|              0211500908                             |"<<endl;
cout<<"|                   OPEN 24 JAM                       |"<<endl;
cout<<"-------------------------------------------------------"<<endl;
cout<<" Masukan Data Pasien "<<endl;
cout<<"Nama: ";
cin.getline(nama,50);
cout<<"Alamat: ";
cin.getline(alamat,70);
cout<<"Kelamin: ";
cin>>kelamin;
cout<<"Penyakit: ";
cin>>penyakit;
cout<<"Lama: ";
cin>>lama;
menukamar:
cout<<"Jenis Kamar: "<<endl;
cout<<"1. Kelas 1 "<<endl;
cout<<"2. Kelas 2 "<<endl;
cout<<"3. Kelas 3 "<<endl;
cout<<"4. Kelas VIP "<<endl;
cout<<"5. Kelas  VVIP"<<endl;
cout<<"Masukan Kelas yang diinginkan[ 1 2 3 4 5]: ";
cin>>kamar;
switch(kamar)
{
case 1:
	cout<<" Fasilitas Ruang Kelas 1 "<<endl;
	cout<<" 2 Tempat Tidur "<<endl;
	cout<<" over bed cabinet "<<endl;
	cout<<" nurse call "<<endl;
	cout<<" kursi tunggu "<<endl;
	cout<<" kamar mandi "<<endl;
	biaya=475000*lama;
	cout<<"Biaya "<<biaya;
goto menukamar;
break;

case 2:
	cout<<" Fasilitas Ruang Kelas 2 "<<endl;
	cout<<" 4 tempat tidur "<<endl;
	cout<<" over bed temple"<<endl;
	cout<<" bed side cabinet"<<endl;
	cout<<" nurse call"<<endl;
	cout<<" kursi tunggu "<<endl;
	biaya=475000*lama;
	cout<<"Biaya "<<biaya;
goto menukamar;
break;

case 3:
	cout<<" Fasilitas Ruang Kelas 3 "<<endl;
	cout<<" 5 tempat tidur "<<endl;
	cout<<" over bed temple"<<endl;
	cout<<" bed side cabinet"<<endl;
	cout<<" nurse call"<<endl;
	cout<<" kursi tunggu "<<endl;
	biaya=475000*lama;
	cout<<"Biaya "<<biaya;
goto menukamar;
break;

case 4:
	cout<<" Fasilitas Ruang Kelas VIP "<<endl;
	cout<<" 1 tempat tidur "<<endl;
	cout<<" over bed temple"<<endl;
	cout<<" bed side cabinet"<<endl;
	cout<<" nurse call"<<endl;
	cout<<" Lemari "<<endl;
	cout<<" TV "<<endl;
	cout<<" AC "<<endl;
	cout<<" kursi tamu + meja kecil "<<endl;
	biaya=475000*lama;
	cout<<"Biaya "<<biaya;
goto menukamar;
break;

case 5:
	cout<<" Fasilitas Ruang Kelas VIP "<<endl;
	cout<<" 1 tempat tidur "<<endl;
	cout<<" over bed temple"<<endl;
	cout<<" bed side cabinet"<<endl;
	cout<<" nurse call"<<endl;
	cout<<" Lemari "<<endl;
	cout<<" TV "<<endl;
	cout<<" AC "<<endl;
	cout<<" Suster Siap siaga didalam kamar"<<endl;
	cout<<" kursi tamu + meja kecil "<<endl;
	biaya=475000*lama;
	cout<<"Biaya "<<biaya;
goto menukamar;
getch();
break;

cout<<"Dokter spesialis"<<endl;
cout<<"1.Dokter Anak"<<endl;
cout<<"2.Dokter Penyakit Dalam"<<endl;
cout<<"3.Dokter THT"<<endl;
cout<<"4.Dokter Bedah"<<endl;
cout<<"Masukan Pilihan Anda [1 2 3 4]: "<<endl;
cin>>dokter;
menudokter:
switch(dokter)
{
case 1:
      jasa=70000*lama;
      cout<<"Dokter Anak"<<endl;
      cout<<"Tarif "<<lama<<endl;
      goto menudokter;
      break;

    case 2:
      jasa=80000*lama;
      cout<<"Dokter Penyakit Dalam"<<endl;
      cout<<"Tarif "<<lama<<endl;
      goto menudokter;
      break;

    case 3:
      jasa=60000*lama;
      cout<<"Dokter THT"<<endl;
      cout<<"Tarif "<<lama<<endl;
      goto menudokter;
      break;

    case 4:
      jasa=100000*lama;
      cout<<"Dokter Bedah"<<endl;
      cout<<"Tarif "<<lama<<endl;
      goto menudokter;
      break;

    case 5:
      jasa=50000*lama;
      cout<<"Dokter Umum"<<endl;
      cout<<"Tarif "<<lama<<endl;
      goto menudokter;
      break;
     }
     }
    getch();
    }