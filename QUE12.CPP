#include<iostream.h>
#include<conio.h>

void swap(int *,int *);

void main()
{
  clrscr();
    int num1,num2,*ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2;

    cout<<"\n\nBefore swap:-\n"
	<<"First no.: "<<*ptr1<<"\tSecond no.: "<<*ptr2<<endl;

    swap(ptr1,ptr2);

    cout<<"\n\nAfter swap:-\n"
	<<"First no.: "<<*ptr1<<"\tSecond no.: "<<*ptr2;
  getch();
}

void swap(int *a,int *b)  //Swaping using POINTER (no Temp. var.)
{
 *a+=*b;
 *b=*a-*b;
 *a-=*b;
}