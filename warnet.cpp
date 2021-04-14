#include <iostream.h>
#include <conio.h>
void sc(int i)
{
	for(i=1;i<=25;i++)
	{
	cout<<"=";
	}
}
	void sd(int j)
	{
		for(j=1;j<=10;j++)
		{
   	cout<<"*";
      }
	}
main()
{
int i,j,lama,ruang;
long biaya,vip,reguler;
char nama[30],ulang;
   atas:
	sc(i);
	cout<<"WARNET BAHAGIA " ;
	sc(i);
	cout<<endl;
   cout<<"masukan nama anda: ";
	cin.getline(nama,30);
	cout<<" lama pakai: ";
	cin>>lama;
	sd(j);
		cout<<" Jenis Ruang ";
		sd(j);
		cout<<endl;
			cout<<" 1. VIP ";
         cout<<endl;
			cout<<" 2. Reguler ";
         cout<<endl;
			cout<<" Masukan Pilihan anda [1 2]= ";
			cin>>ruang;
         cout<<endl;
				biaya=5000;
      		vip=(biaya*2)*lama;
				reguler=biaya*lama;
				sd(j);
            	switch(ruang)
               	case 1:
                  	sd(j);
                  	cout<<" VIP " ;
                  	sd(j);
                  	cout<<endl;
                  	cout<<" Harga yang harus anda bayar : "<<vip;
                     cout<<" Ada mau mengulang lagi? pilih [Y/T]: ";
                     cin>>ulang;
                     	if(ulang=='y'||ulang=='Y')
                        goto atas;
                     break;

                  case 2:
                  	sd(j);
                     cout<<"reguler";
                     sd(j);
                     cout<<endl;
                     cout<<" Harga yang harus anda bayar: "<<reguler;
                     cout<<" Ada mau mengulang lagi? pilih [Y/T]: ";
                     cin>>ulang;
                     	if(ulang=='y'||ulang=='Y')
                        goto atas;
                        break;

getch();
}