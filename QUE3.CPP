	/*	CALCULATE TERMS in order 1+1/2+1/3+...+1/n	*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
   int terms;
   float i,sum=0;
   cout<<"Enter a number of terms to be calculated (1+1/2+1/3+...): ";
   cin>>terms;
   for(i=1;i<=terms;i++)
    sum+=1/i;
   cout<<"Sum of the sequence, upto given"<<terms<<" terms is: "<<sum;
  getch();
}