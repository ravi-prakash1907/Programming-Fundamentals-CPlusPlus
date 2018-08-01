/*	ALL PRIME NOS. IN BETWEEN	*/
#include<iostream.h>
#include<conio.h>

void prime(int);

void main()
{
 clrscr();
  int num,i;
  cout<<"Enter the no. upto which all prime nos. are to printed: ";
  cin>>num;
  for(i=2;i<=num;i++)
  prime(i);
 getch();
}

void prime(int x)
{
 int i;
 for(i=2;i<x;i++)
 {
  if(x%i==0)
    break;
  else
    continue;
 }
 if(i==x)
  cout<<x<<endl;
}