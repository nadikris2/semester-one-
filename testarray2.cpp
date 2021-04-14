#include <constrea.h>
#include <cstring.h>
int i,jt,nt,a,x,jb,tot;
int harga[100];
string nama[100];
string kode[100];
void sd(int i)
{
for(i=0;i<=20;i++)
{
cout<<"=";
}
}

void menu()
{
cout<<"no. nota: ";
cin>>nt;
cout<<"Jumlah Transaksi: ";
cin>>jt;
for(a=0;a<=jt;a++)
{
cout<<"Transaksi ke : "<<a+1<<endl;
cout<<"kode paket: "<<kode[x]<<endl;
cout<<"Nama Paket: "<<nama[x]<<endl;
cout<<"harga satuan: "<<harga[x]<<endl;
cout<<"jumlah beli: "<<jb;
tot=harga[x]*jb;
cout<<"total harga: "<<tot<<endl;
}
}

int kd(int x)
{
if(kode[x]=="b-01")
{
nama[x]="Cheese Burger";
harga[x]=5500;
}
else if(kode[x]=="b-02")
{
nama[x]="Beef Burger";
harga[x]=7500;
}
else if(kode[x]=="B-SPC")
{
nama[x]="special burger";
harga[x]=11000;
}
else if(kode[x]=="P-M");
{
nama[x]="pizza medium size";
harga[x]=24000;
}
 if(kode[x]=="P-S");
{
nama[x]="pizza small size";
harga[x]=9000;
}
 if(kode[x]=="P-SPC");
{
nama[x]="special pizza";
harga[x]=75500;
}
 if(kode[x]=="D-C");
{
nama[x]="soft drink cola";
harga[x]=4500;
}
 if(kode[x]=="D-J");
{
nama[x]="soft drink juice";
harga[x]=4500;
}
}
main()
{
clrscr();
sd(i);
cout<<endl;
cout<<"SERDAM BURGER & PIZZA ";
cout<<endl;
sd(i);
cout<<endl;
menu();
getch();
}