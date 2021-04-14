#include <iostream.h>
#include <conio.h>
main()
{
int tahun;
cout<<"Masukan Tahun: ";
cin>>tahun;
if(tahun<=3000&&tahun%4==0)
{
cout<<"Kabisat";
}
else
{
cout<<"Bukan Kabisat";
}

getch();
}