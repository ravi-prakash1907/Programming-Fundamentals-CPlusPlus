#include<iostream.h>
#include<conio.h>

void merge(int a[],int b[],int m,int n);

void main()
{
  clrscr();
    int i,l1=20,l2=20,arr1[20],arr2[20];  //Let arrays have max size 20

    cout<<"Enter length of 2 diff. arrays (max 20, for each):\n";
    cin>>l1>>l2;
    if(l1>20)
    l1=20;
    if(l2>20)
    l2=20;

    cout<<"\nEnter first array:\n";
     for(i=0;i<l1;i++)
       cin>>arr1[i];

    cout<<"Enter second array:\n";
     for(i=0;i<l2;i++)
       cin>>arr2[i];

    merge(arr1,arr2,l1,l2);
  getch();
}


	void merge(int a[],int b[],int m,int n)
{
  int i,j,small,big,loc,x=m+n,new_arr[40];

   for(i=0;i<x;i++)
   {
     if(i<m)
       new_arr[i]=a[i];
     else
      new_arr[i]=b[i-m];
   }

   //insertion shorting

   //ascending order
 if(new_arr[0]<new_arr[1])
 {
  for(i=0;i<x;i++)
  {
    small=new_arr[i];
    loc=i;
    for(j=i+1;j<x;j++)
    {
      if(small>new_arr[j])
      {
       loc=j;
       small=new_arr[j];
      }
    }
   if(loc!=i)
   {
    new_arr[loc]=new_arr[i];
    new_arr[i]=small;
   }
  }
 }


   else
   //descending order

   {
 for(i=0;i<x;i++)
 {
   small=new_arr[i];
   loc=i;
   for(j=i+1;j<x;j++)
   {
     if(small<new_arr[j])
     {
      loc=j;
      small=new_arr[j];
     }
   }
  if(loc!=i)
  {
   new_arr[loc]=new_arr[i];
   new_arr[i]=small;
  }
 }
   }

   cout<<"\n  The new merged ordered array: \n\n";
   for(i=0;i<x;i++)
     cout<<new_arr[i]<<"   ";
}