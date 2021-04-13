#include <constrea.h>
int n,a;
long int hasil;

void faktor()
{
for(a=n;a>=1;a--)
{
hasil=hasil*a;
}
cout<<"hasil faktor: "<<hasil<<endl;
}
main()
{
hasil=1;
cout<<"masukan bilangan yang ingin di faktorial kan : ";
cin>>n;
faktor();
getch();
}