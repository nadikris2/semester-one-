#include <iostream.h>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
main()
{
mulai:
clrscr();
int pil, nilai, ID;
char nama_siswa[20];
cout<<"---------Pilihan Sortir-----"<<endl;
cout<<"1.Nama Siswa"<<endl;
cout<<"2.ID"<<endl;
cout<<"Masukan Pilihan Anda [1 2 ]= ";
cin>>pil;
cout<<"Masukan Nama Siswa: ";
cin>>nama_siswa;
cout<<"Masukan ID siswa: ";
cin>>ID;
cout<<"Masukan Nilai Siswa: ";
cin>>nilai;
switch(pil)
{
case 1:
clrscr();
cout<<"hasil: "<<nama_siswa<<endl<<nilai;
getch();
goto mulai;

case 2:
clrscr();
cout<<"ID= "<<ID<<endl;
cout<<"Nilai Ujian: "<<nilai;
getch();
goto mulai;
}
getch();
return 0;
}