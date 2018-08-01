
#include<iostream.h>
#include<conio.h>
#include<process.h>
void even(int arr[],int);
void odd(int arr[],int);
void min_max(int arr[],int);
void rev(int arr[],int);
void sum_avr(int arr[],int);
void rem_dup(int a[],int&);

void main()
{
 clrscr();
  int arr[25],len=25,i,choice;

 start:
  cout<<"Enter the length of the array (max 25): ";
  cin>>len;
  if(len>25)
  len=25;
  cout<<"Enter "<<len<<" elements, one by one:\n";
  for(i=0;i<len;i++)
    cin>>arr[i];

 clrscr();
   cout<<"Your array: \n";
  for(i=0;i<len;i++)
  {
    cout<<arr[i]<<"  ";
  }

    cout<<"\nMENU"
	<<"\n______________";
    cout<<"\nChoose any one to print:-\n"
	<<"\n1) Even values"
	<<"\n2) Odd values"
	<<"\n3) Sum  Average of the values of array"
	<<"\n4) Maximum  Minimum value"
	<<"\n5) Remove duplicate elements"
	<<"\n6) Print array in reverse order"
	<<"\n7) To enter the array again"
	<<"\n* Enter any other key to get exit!";
    cin>>choice;

    switch(choice)
    {
     case 1:     even(arr,len);
		 break;
     case 2:     odd(arr,len);
		 break;
     case 3:     sum_avr(arr,len);
		 break;
     case 4:     min_max(arr,len);
		 break;
     case 5:     rem_dup(arr,len);
		 break;
     case 6:     rev(arr,len);
		 break;
     case 7:     goto start;

     default :   break;
    }

 getch();
}

void even(int arr[],int l)
{
  cout<<"\n Even: \n";
 for(int i=0;i<l;i++)
 {
   if(arr[i]%2==0)
     cout<<"  "<<arr[i]<<endl;
 }
 getch();
}

void odd(int arr[],int l)
{
  cout<<"\n Odd: \n";
 for(int i=0;i<l;i++)
 {
   if(arr[i]%2!=0)
     cout<<"  "<<arr[i]<<endl;
 }
 getch();
}

void sum_avr(int arr[],int l)
{
  int sum=0;
 for(int i=0;i<l;i++)
   sum+=arr[i];

  cout<<"\n Sum: "<<sum
      <<"\n Average: "<<sum/l;
 getch();
}

void min_max(int arr[],int l)
{
  int min=arr[0],max=arr[0];
  for(int i=0;i<l;i++)
 {
   if(arr[i]>max)
   max=arr[i];
   if(arr[i]<min)
   min=arr[i];
 }
  cout<<"\nMaximum: "<<max
      <<"\nMinimum: "<<min;
 getch();
}

void rev(int arr[],int l)
{
  cout<<"\nArray in reverse order:\n";
  for(int i=l-1;i>=0;i--)
     cout<<arr[i]<<"  ";
getch();

}

void rem_dup(int a[],int& size)
{
  int i,j,c,t;
  for(i=0;i<size;i++)
  {

    for(j=i+1;j<=size;j++)
    {
      if(a[i]==a[j])
      {
	for(t=j;t<size-1;t++)
	{
	  a[t]=a[t+1];
	}
	size--;
	j--;
      }
    }
  }
  size++;
   cout<<"\n\nNew array, after removing duplicate elements: \n";
   for(i=0;i<size;i++)
	cout<<a[i]<<"  ";
}