#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
    int arr[10],temp[10],i;
    int *ptr=&arr[0];
    cout<<"Enter 10 integers:\n";
    for(i=0;i<10;i++)
    {
       cin>>*ptr;
       ptr++;
    }
    for(i=0;i<10;i++)
    {
       temp[i]=arr[i];
    }

   int small,loc,j;
   for(i=0;i<10;i++)
   {
     small=temp[i];
     loc=i;
     for(j=i+1;j<10;j++)
     {
       if(small>temp[j])
       {
	loc=j;
	small=temp[j];
       }
     }
    if(loc!=i)
    {
     temp[loc]=temp[i];
     temp[i]=small;
    }
   }

   cout<<"\n\nArray in ascending order:\n";
   for(i=0;i<10;i++)
   cout<<temp[i]<<"\t";

   cout<<"\n\nArray in descending order:\n";
   for(i=9;i>-1;i--)
   cout<<temp[i]<<"\t";
  getch();
}