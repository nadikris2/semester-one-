#include <constrea.h>
#include <cstring.h>
int pil,x,j,u;
string z,kd;
string nama[12]={"andi","angel","briliant","felix","eric","willy","andi","derry","jayaku","jason","martien","novita"};
string kodekelas[12]={"1PTI1","1PTI1","1PTI1","1PTI1","1PTI1","1PTI1","1PTI2","1PTI2","1PTI2","1PTI2","1PTI2","1PTI2"};
int uts[]={60,80,85,66,60,100,70,70,100,90,80,0};
int uas[]={70,85,80,99,95,100,60,75,100,95,95,0};

void sd(int i)
{
for(i=0;i<=10;i++)
{
cout<<"=";
}
cout<<" ";
}
main()
{
cout<<"masukan yang ingin di search: "<<endl;
cout<<"1. Nama "<<endl;
cout<<"2. kode kelas"<<endl;
cout<<"3. UTS"<<endl;
cout<<"4. UAS"<<endl;
cout<<"masukan pilihan[1 2 3 4]: ";
cin>>pil;
switch(pil)
{
case 1:
  cout<<"masukan nama: ";
  cin>>z;
  for(x=0;x<12;x++)
  {
  if(nama[x]==z)
  {
  cout<<"kelas: "<<kodekelas[x]<<endl;
  cout<<"uts: "<<uts[x]<<endl;
  cout<<"uas: "<<uas[x]<<endl;
  }
  }
  break;

case 2:
	cout<<"masukan kode kelas: ";
	cin>>kd;
	for(x=0;x<12;x++)
	{
	if(kodekelas[x]==kd)
	{
	cout<<"nama: "<<nama[x]<<endl;
	cout<<"uts: "<<uts[x]<<endl;
	cout<<"uas : "<<uas[x]<<endl;
	}
	}
	break;

case 3:
	cout<<" masukan uts: ";
   cin>>j;
   for(x=0;x<12;x++)
	{
	if(uts[x]==j)
	{
   cout<<"nama: "<<nama[x]<<endl;
   cout<<"kode kelas: "<<kodekelas[x]<<endl;
   cout<<"uas: "<<uas[x]<<endl;
   }
}
break;
case 4:
	cout<<"uas: ";
   cin>>u;
   for(x=0;x<12;x++)
	{
	if(uas[x]==u)
	{
   cout<<"nama: "<<nama[x]<<endl;
   cout<<"kode kelas: "<<kodekelas[x]<<endl;
   cout<<"uts: "<<uts[x]<<endl;
   }
}
break;
}
getch();
}
