#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
   int num,i,sum=0,pro=1;
   cout<<"Enter a number:";
   cin>>num;
   do
   {
     int x=num%10;
     sum+=x;
     pro*=x;
     num/=10;
   } while(num!=0);
   cout<<"Sum of integers of entered no.: "<<sum<<endl
       <<"Product of integers of entered no.: "<<pro;
  getch();
}
