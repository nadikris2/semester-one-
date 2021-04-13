#include <iostream.h>
#include <conio.h>
main()
{
i=1;
   while(i<=10)
   {
   	if((i==1 || (!(i==2 || i==3 || (i%2!=0 && i%3!=0)))) && i%2==0)
      {
      	cout<<i<<" ";
      }
      else
      {
      	cout<<"";
      }
      i=i+1;
   }
   getch();