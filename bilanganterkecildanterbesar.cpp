#include <iostream.h>
#include <conio>
main()
{
int bil1,bil2,bil3,bil4,bil5,nmax,nmin,bil;
cout<<"masukan bilangan 1: ";
cin>>bil1;
cout<<"masukan bilangan 2: ";
cin>>bil2;
cout<<"masukan bilangan 3: ";
cin>>bil3;
cout<<"masukan bilangan 4: ";
cin>>bil4;
cout<<"masukan bilangan 5: ";
cin>>bil5;
if(bil1<bil2 && bil1<bil3 && bil1<bil4 && bil1<bil5)
{
nmin=bil1;
}
if(bil2<bil3 && bil2<bil4 && bil3<bil5 && bil2<bil1)
{
nmin=bil2;
}
if(bil3<bil4 && bil3<bil5 && bil3<bil1 && bil3<bil2 )
{
nmin=bil3;
}
if(bil4<bil5 && bil4<bil1 && bil4<bil2 && bil4<bil3)
{
nmin=bil4;
}
if(bil5<bil1 && bil5<bil2 && bil5<bil3 && bil5<bil4)
{
nmin=bil5;
}
if(bil1>bil2 && bil1>bil3 && bil1>bil4 && bil1>bil5)
{
nmax=bil1;
}
if(bil2>bil3 && bil2>bil4 && bil3>bil5 && bil2>bil1)
{
nmax=bil2;
}
if(bil3>bil4 && bil3>bil5 && bil3>bil1 && bil3>bil2 )
{
nmax=bil3;
}
if(bil4>bil5 && bil4>bil1 && bil4>bil2 && bil4>bil3)
{
nmax=bil4;
}
if(bil5>bil1 && bil5>bil2 && bil5>bil3 && bil5>bil4)
{
nmax=bil5;
}
cout<<"Bilangan Terkecil: "<<nmin<<endl;
cout<<"Bilangan Terbesar: "<<nmax<<endl;
for(bil=nmin;bil<=nmax;bil++)
{
if(bil==bil1)
{
cout<<"bilangan terkecil  : "<<bil1<<endl;
}
if(bil==bil2)
{
cout<<"bilangan terkecil  : "<<bil2<<endl;
}
if(bil==bil3)
{
cout<<"bilangan terkecil : "<<bil3<<endl;
}
if(bil==bil4)
{
cout<<"bilangan terkecil : "<<bil4<<endl;
}
if(bil==bil5)
{
cout<<"bilangan terkecil : "<<bil5<<endl;
 }
 }
getch();
}