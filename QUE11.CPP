#include<iostream.h>
#include<ctype.h>
#include<stdio.h>
#include<conio.h>

void countAlpha(char arr[]);

void main()
{
 clrscr();
  char cmd[80];
  cout<<"  Enter the command line:\n\n";
  gets(cmd);
  cout<<"\n\n  ";
  countAlpha(cmd);
 getch();
}

void countAlpha(char arr[])
{
  int i,c=0,x=0,alpha[26],ch;
  char letter=65;

  for(i=0;i<26;i++)
   alpha[i]=0;

  for(i=0;arr[i]!='\0';i++)
  {
    for(ch=65;ch<91;ch++)
      if(arr[i]==ch||arr[i]==ch+32)
      {
	alpha[ch-65]=alpha[ch-65]+1;
	break;
      }
  }

  for(i=0;i<26;i++)
  {
     if(alpha[i]!=0)
     {
      if(i!=26)
	cout<<"\tOccrance of "<<char(letter)<<" : "<<alpha[i];
	c++;
     }
     else
      x=1;

     letter++;

     if(c==3)
     {
      c=0;
      cout<<"\n\n";
     }
     else if(i==25)
      cout<<"\n\n";
  }

  if(x==1)
   cout<<"  Other alphabets are not present!!";
}