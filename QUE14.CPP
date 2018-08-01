#include<iostream.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
struct circle
{
 float circumferance,area;
};

circle area(int);
void main()
{
  clrscr();
    float radius,x;
    circle C1;
    cout<<"Enter the radius of the circle (in cm): ";
    cin>>radius;

   C1=area(radius);

    cout<<"\nArea (in sq cm): "<<C1.area;

    cout<<"\nCircumferance (in cm): "<<C1.circumferance;
  getch();
}

circle area(int r)
{
  circle C;
    C.area=PI*pow(r,2);
    C.circumferance=2*PI*r;
  return C;
}