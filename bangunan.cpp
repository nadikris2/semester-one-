#include <iostream.h>
#include <conio.h>
#include <math.h>
main()
{
 cout<<" Menghitung harga pengeluaran bapak untuk LP dan V sebuah seng"<<endl;
 cout<<"TIPE BANGUNAN"<<endl;
 int sisi,V,LP;
 cout<<"(1) Kubus"<<endl;
 cout<<"Masukan Sisi: "<<endl;
 cin>>sisi;
 LP=6*sisi*sisi;
 cout<<"LP Kubus: "<<LP<<endl;
 V=sisi*sisi*sisi;
 cout<<"Volume Kubus : "<<V<<endl;

 LP = LP*5000;
 cout<<"Total Harga LP : "<<LP<<endl;
 V = V*10000;
 cout<<"Total Harga V  : "<<V<<endl;

 int Panjang,Lebar,Tinggi;
 cout<<"(2) Balok"<<endl;
 cout<<"Masukan Panjang: "<<endl;
 cin>>Panjang;
 cout<<"Masukan Lebar : "<<endl;
 cin>>Lebar;
 cout<<"Masukan tinggi : "<<endl;
 cin>>Tinggi;
 LP=2*(Panjang*Lebar+Panjang*Tinggi+Lebar*Tinggi);
 cout<<"LP Balok: "<<LP<<endl;
 V=Panjang*Lebar*Tinggi;
 cout<<"Volume Balok: "<<V<<endl;
  LP = LP*5000;
 cout<<"Total Harga LP : "<<LP<<endl;
 V = V*10000;
 cout<<"Total Harga V  : "<<V<<endl;

float Sisi,alas,tinggi,panjang,lebar;
cout<<"(3) Limas"<<endl;
cout<<"Masukan Sisi: "<<endl;
cin>>Sisi;
cout<<"Masukan Alas: "<<endl;
cin>>alas;
cout<<"Masukan Tinggi: "<<endl;
cin>>tinggi;
cout<<"Masukan Panjang: "<<endl;
cin>>panjang;
cout<<"Masukan Lebar: "<<endl;
cin>>lebar;
LP=(Sisi+Sisi)+(0.5*alas*tinggi)*4;
cout<<"LP LIMAS: "<<LP<<endl;
V=0.3*panjang*lebar*tinggi;
cout<<"Volume Balok: "<<V<<endl;
LP = LP*5000;
cout<<"Total Harga LP : "<<LP<<endl;
V = V*10000;
cout<<"Total Harga V  : "<<V<<endl;

const float phi=3.14;
float Radius,S,T;
cout<<"(4)Kerucut= "<<endl;
cout<<"Masukan Radius= "<<endl;
cin>>Radius;
cout<<"Masukan Sisi= "<<endl;
cin>>S;
cout<<"Masukan Tinggi= "<<endl;
cin>>T;
LP=phi*Radius*Radius+phi*Radius*S;
cout<<"LP Kerucut= "<<LP<<endl;
V=0.3*phi*Radius*Radius*T;
cout<<"Volume Kerucut= "<<V<<endl;
LP = LP*5000;
cout<<"Total Harga LP : "<<LP<<endl;
V = V*10000;
cout<<"Total Harga V  : "<<V<<endl;

float R,t;
cout<<"(5)Tabung= "<<endl;
cout<<"Masukan Radius="<<endl;
cin>>R;
cout<<"Masukan tinggi= "<<endl;
cin>>t;
LP=2*phi*R*R+2*phi*R*t;
cout<<"LP Tabung= "<<LP<<endl;
V=phi*R*R*t;
cout<<"Volume Tabung= "<<V<<endl;
LP = LP*5000;
cout<<"Total Harga LP : "<<LP<<endl;
V = V*10000;
cout<<"Total Harga V  : "<<V<<endl;

cout<<"Terima Kasih"<<endl;
cour<<"Sekian"<<endl;





 getch();
 }
