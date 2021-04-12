#include <iostream.h>
#include <conio>
#include <cstring.h>
main()
{
int nim1,nim2,nim3,nim4,nim5;
int pil,nake,nabe,n,pil2;
int n1,n2,n3,n4,n5;
string na1,na2,na3,na4,na5,nama;
char o;
cout<<"-----------Masukan Data ----------"<<endl;
cout<<"Masukan Nama murid pertama: "<<endl;
	cin>>na1;
		cin>>na2;
			cin>>na3;
  				cin>>na4;
					cin>>na5;
cout<<"Masukan Nim murid "<<endl;
	cin>>nim1;
		cin>>nim2;
			cin>>nim3;
				cin>>nim4;
					cin>>nim5;
cout<<"Masukan Nilai murid pertama "<<endl;
	cin>>n1;
		cin>>n2;
			cin>>n3;
				cin>>n4;
					cin>>n5;
mulai:
cout<<"-------------pilihan sortir-------"<<endl;
cout<<"1. Nama,nilai,dan nim siswa"<<endl;
cout<<"2.Mengurutkan nama yang sudah diinput menu 1"<<endl;
cout<<"3.Mencari Nama yang dicari"<<endl;
cout<<"Masukan Pilihan anda [1 2 3]= ";
cin>>pil;
switch(pil)
{
case 1:
clrscr();
	cout<<"Nama murid pertama: "<<endl;
		cout<<na1<<endl;
	cout<<" Nim murid pertama : "<<endl;
		cout<<nim1<<endl;
	cout<<" Nilai murid pertama: "<<endl;
		cout<<n1<<endl;
	cout<<" Nama murid kedua: "<<endl;
		cout<<na2<<endl;
	cout<<" Nim murid kedua : "<<endl;
		cout<<nim2<<endl;
	cout<<" Nilai murid kedua: "<<endl;
		cout<<n2<<endl;
	cout<<" Nama murid Ketiga: "<<endl;
		cout<<na3<<endl;
	cout<<" Nim murid Ketiga : "<<endl;
		cout<<nim3<<endl;
	cout<<" Nilai murid ketiga: "<<endl;
		cout<<n3<<endl;
	cout<<" Nama murid keempat: "<<endl;
		cout<<na4<<endl;
	cout<<" Nim murid keempat : "<<endl;
		cout<<nim4<<endl;
	cout<<" Nilai murid keempat: "<<endl;
		cout<<n4<<endl;
	cout<<" Nama murid kelima: "<<endl;
		cout<<na5<<endl;
   cout<<" Nim murid kelima : "<<endl;
		cout<<nim5<<endl;
   cout<<" Nilai murid kelima: "<<endl;
		cout<<n5<<endl;
goto mulai;
break;


case 2:
clrscr();
cout<<"-----------masukan pilihan sortir------"<<endl;
cout<<"1. descending"<<endl;
cout<<"2. ascending"<<endl;
cout<<"masukan pilihan anda[ 1 2]= ";
cin>>pil2;
if(n1<=n2 && n1<=n3 && n1<=n4 && n1<=n5)
    {
     nake=n1;
    }
    else
    if(n2<=n1 && n2<=n3 && n2<=n4 && n2<=n5)
    {
     nake=n2;
    }
    else
    if(n3<=n4 && n3<=n5 && n3<=n1 && n3<=n2)
    {
     nake=n3;
    }
    else
    if(n4<=n5 && n4<=n1 && n4<=n2 && n4<=n3)
    {
     nake=n4;
    }
    else
    if(n5<=n1 && n5<=n2 && n5<=n3 && n5<=n4)
    {
     nake=n4;
    }
    if(n1>=n2 && n1>=n3 && n1>=n4  && n1>=n5)
    {
     nabe=n1;
    }
    else
    if(n2>=n3 && n2>=n4 && n2>=n5 && n2>=n1)
    {
     nabe=n2;
    }
    else
    if(n3>=n4 && n3>=n5 && n3>=n1 && n3>=n2)
    {
     nabe=n3;
    }
    else
    if(n4>=n5 && n4>=n1 && n4>=n2 && n4>=n3)
    {
     nabe=n4;
    }
    else
    if(n5>=n1 && n5>=n2 && n5>=n3 && n5>=n4)
    {
     nabe=n5;
    }
		cout<<"Nilai Terkecil: "<<nake<<endl;
		cout<<"Nilai Terbesar: "<<nabe<<endl;


if(pil2==1)
		cout<<"PILIHAN ASCENDING:"<<endl;
for(n=nake;n<=nabe;n++)
	{
if(n==n1)
	{
		cout<<"nilai : "<<n1<<endl;
	}
if(n==n2)
	{
		cout<<"nilai : "<<n2<<endl;
	}
if(n==n3)
	{
		cout<<"nilai : "<<n3<<endl;
	}
		if(n==n4)
	{
		cout<<"nilai: "<<n4<<endl;
	}
		if(n==n5)
	{
		cout<<"nilai : "<<n5<<endl;
	}
else if(pil2==2)
	{
cout<<"Pilihan ASCENDING:"<<endl;
for(n=nabe;n>=nake;n--)
	{
	if(n==n1)
	{
	cout<<"nilai : "<<n1<<endl;
	}
			if(n==n2)
		{
		cout<<"nilai : "<<n2<<endl;
		}
      	if(n==n3)
		{
			cout<<"nilai : "<<n3<<endl;
		}
      	if(n==n4)
      {
      	cout<<"nilai: "<<n4<<endl;
      }
      	if(n==n5)
      {
   		cout<<"nilai : "<<n5<<endl;
 		}
      }
      }
goto mulai;
 break;

case 3:
 cout<<"masukan nama"<<endl;
 cout<<"Cari nama yang dicari: ";
 cin>>nama;
 	if(nama==na1 || nama==na2 || nama==na3 || nama==na4 || nama==na5)
 	{
 		cout<<"nama tersebut terdaftar"<<endl;
 	}
 		else
 	{
 		cout<<"nama tidak terdaftar"<<endl;
 	}
 	getch();
 	}
 	}
 	}

