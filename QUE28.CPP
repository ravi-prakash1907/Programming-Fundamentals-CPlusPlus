#include<iostream.h>
#include<conio.h>
void rev(int*);
void main()
{
  clrscr();
     int *arr,i;
     cout<<"Enter a 10 element array: \n";
     for(i=0;i<10;i++)
     {
       cin>>arr[i];
     }
     rev(arr);
     cout<<"\n\nArray after sorting:\n\n";
     for(i=0;i<10;i++)
     {
       cout<<arr[i]<<"  ";
     }
  getch();
}
void rev(int *a)
{
  int i,j,small,loc;
  //insertion sort
  for(i=0;i<10;i++)
  {
    small=a[i];
    loc=i;
    for(j=i+1;j<10;j++)
    {
      if(small>a[j])
      {
       loc=j;
       small=a[j];
      }
    }
   if(loc!=i)
   {
    a[loc]=a[i];
    a[i]=small;
   }
  }
}