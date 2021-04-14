#include <iostream.h>
#include <conio>
main()
{
mulai:
clrscr();
int jamkeluar=0,jammasuk=0,kendaraan=0,harga=0,lama=0;

cout<<"PARKIRAN MURAH MERIAH "<<endl;
cout<<"--------------------------------"<<endl;
cout<<"1.Mobil "<<endl;
cout<<"2.Motor "<<endl;
cout<<"3.Sepeda "<<endl;
cout<<"Jam masuk (0-24) : ";
cin>>jammasuk;
cout<<"Jam keluar (0-24): ";
cin>>jamkeluar;
lama=jamkeluar-jammasuk;
cout<<"Masukan Pilihan Kendaraan [1 2 3 ] = ";
cin>>kendaraan;

switch(kendaraan)
{
case 1:
	clrscr();
	if(lama<=2)
	{
		harga = 10000;
		cout<<"harga "<<harga;
	}
		else if(lama>=2 && lama<=12)
			{
				harga=((lama-2)*15000)+10000;
				cout<<"harga "<<harga;
			}
				else if(lama>12)
					{
						harga=(10*15000)+10000;
                  cout<<"harga "<<harga;
					}
   break;

case 2:
	clrscr();
	if(lama <=2)
   {
		harga=20000;
      cout<<"harga "<<harga;
	}
		else if(lama >=2 && lama<=12)
		{
			harga=((lama-2)*25000)+20000;
			cout<<"harga "<<harga;
		}
			else
			{
				harga=(10*25000)+20000;
				cout<<"harga "<<harga;
			}
   break;

case 3:
	clrscr();
	if(lama<=2)
	{
		harga=5000;
		cout<<"harga "<<harga;
	}
		else if(lama >=2 && lama<=12)
		{
			harga=((lama-2)*50000)+5000;
			cout<<"harga "<<harga;
		}
			else
			{
				harga=(10*50000)+5000;
				cout<<"harga "<<harga;
			}
 break;

}

getch();
goto mulai;
}