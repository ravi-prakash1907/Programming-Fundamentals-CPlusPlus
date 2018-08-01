#include<iostream.h>
#include<conio.h>
#define swap(a,b){a=a+b; b=a-b; a=a-b;};

void main()
{
	clrscr();
	  int a,b;
	    cout<<"Enter two numbers, one by one: \nf";
	    cin>>a>>b;
		swap(a,b);
		cout<<"\n\nAfter swap: \n"<<a<<endl<<b;
	getch();
}