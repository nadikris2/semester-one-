#include <iostream.h>
#include <conio>
main()
{
int anak,pokok,tunjangan,total;
cout<<"Masukan Gaji pokok: ";
cin>>pokok;
cout<<"Masukan Jumlah Anak: ";
cin>>anak;
if(pokok > 5000 && pokok <=10000)
{
cout<<"golongan A"<<endl;
}
else if(pokok >10001 && pokok <=20000)
{
cout<<"golongan B"<<endl;
}
else if(pokok >20001 && pokok <=30000)
{
cout<<"golongan C"<<endl;
}
else
{
cout<<"masukan kembali gaji anda "<<endl;
getch();
return 0;
}

if(anak <=2)
{
tunjangan = pokok*anak*10/100;
}
else
{
tunjangan = pokok*20/100;
}

total = tunjangan + pokok;
cout<<" Gaji Total anda ";
cout<<total;
getch();
}