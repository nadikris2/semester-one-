#include <iostream.h>
#include <conio.h>
main()
{
int i,a;
cout<<"masukan yang mau mundur : ";
cin>>a;
for(i=0;i<=a;i+2)
{
a=a-1;
cout<<a;
}
getch();
}