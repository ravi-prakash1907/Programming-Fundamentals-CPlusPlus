		/*
			   TO PRINT A SERIES:-
				*
			       ***
			      *****
			      .
			      .
			      . n times
						*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
 clrscr();
  int i,j=1,lines;
  cout<<"Enter no. of lines: ";
  cin>>lines;
  for(i=lines-1;i>=0;i--)
  {
    cout<<setw(i+1);
    for(int p=1;p<=j;p++)
    cout<<"*";
    cout<<"\n";
    j+=2;
  }
 getch();
}