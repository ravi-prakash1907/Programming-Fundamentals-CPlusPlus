#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
  clrscr();
     int n,i,sum=0,*cal;
     cout<<"Enter the no. of elements to be added: ";
     cin>>n;
     cal=(int*)calloc(n,sizeof(int));
     cout<<"\n\n Enter the array: \n\n";
     for(i=0;i<n;i++)
     {
       cin>>cal[i];
     }
     for(i=0;i<n;i++)
     {
       sum+=cal[i];
     }

     cout<<"\n\nSum is (using calloc()): "<<sum;
  getch();
}