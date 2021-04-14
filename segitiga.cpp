#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <math.h>

void main ()
{
                double ax,ay,bx,by,cx,cy,AB,BC,CA ;
                
                cout<<"Garis A.x : ";
                cin>>ax;
  cout<<"Garis A.y : ";
                cin>>ay;
                cout<<"Garis B.x : ";
                cin>>bx;
  cout<<"Garis B.y : ";
                cin>>by;
                cout<<" Garis C.x : ";
                cin>>cx;
  cout<<" Garis C.y : ";
                cin>>cy;
AB = ((ax-bx)+ (ay-by));
BC = ((bx-cx)+ (by-cy));
CA = ((cx-ax)+ (cy-ay));
                if ((AB<BC+CA)&&(BC<AB+CA)&&(CA<AB<BC)) {
                cout<<"Membentuk Segitiga"<<endl;
                }
                else
                cout<<"  Tidak Membentuk Segitiga";
                getch ();
}