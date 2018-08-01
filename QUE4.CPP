	/*	CALCULATE TERMS in order 1-2+3-4+.....	*/
#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
   int terms,i,res=0,condition=0;
   cout<<"Enter a number of terms to be calculated (1+1/2+1/3+...): ";
   cin>>terms;
   for(i=1;i<=terms;i++)
   {
      if(condition==0)
      {
	res+=i;
	condition=1;
	continue;
      }
      if(condition==1)
      {
	res-=i;
	condition=0;
	continue;
      }
   }
   cout<<"Result for the sequence, upto given"<<terms<<" terms is: "<<res;
  getch();
}