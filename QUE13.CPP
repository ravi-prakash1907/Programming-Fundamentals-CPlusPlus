#include<iostream.h>
#include<conio.h>
void alter(int &,int &);
void main()
{
  clrscr();
    int num1,num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;
    cout<<"Before altering the values:\n"
	<<"First no.: "<<num1<<"\t Second no.:"<<num2;
    alter(num1,num2);
     cout<<"\n\nAfter altering the values:\n"
	<<"First no.: "<<num1<<"\t Second no.:"<<num2;
  getch();
}

void alter(int &x,int &y)   //Exchanging values WITHOUT using TEMP. variable
{
  x+=y;
  y=x-y;
  x-=y;
}