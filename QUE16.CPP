#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
#include<ctype.h>

void address(char *str1);
void join(char *str1,char *str2);
void join_strcat(char *str1,char *str2);
void compare(char *str1,char *str2);
void len_ptr(char *str1);
void lwr_to_upr(char *str1);
void upr_to_lwr(char *str1);
void vowel(char *str1);
void rev(char *str1);

void main()
{
 clrscr();
  int choice;
  char *str1,*str2;

 clrscr();
    cout<<"\nMENU"
	<<"\n______________";
    cout<<"\nChoose any one to print: \n"
	<<"\n1) Address of each charector"
	<<"\n2) Concatinate 2 strings without using strcat()"
	<<"\n3) Concatinate 2 strings using strcat()"
	<<"\n4) Compare 2 string"
	<<"\n5) Find length of a string using pointer"
	<<"\n6) Convert all lower case char to uppper case"
	<<"\n7) Convert all upper case charectors to lower case"
	<<"\n8)  Find no. of vowel(s)"
	<<"\n9) To reverse a string"
	<<"\n * To get exit, enter any other key!\n";
    cin>>choice;

    switch(choice)
    {
     case 1:
     case 5:
     case 6:
     case 7:
     case 8:
     case 9:     {
			cout<<"Enter a string (max 30): ";
			gets(str1);
		 }
		 break;
     case 2:
     case 3:
     case 4:     {
			cout<<"Enter two strings (max 30): ";
			gets(str1);
			gets(str2);
		 }
		 break;
     default :   exit(0);
    }

    switch(choice)
    {
      case 1:   address(str1);
		break;
      case 2:   join(str1,str2);
		break;
      case 3:   join_strcat(str1,str2);
		break;
      case 4:   compare(str1,str2);
		break;
      case 5:   len_ptr(str1);
		break;
      case 6:   lwr_to_upr(str1);
		break;
      case 7:   upr_to_lwr(str1);
		break;
      case 8:	vowel(str1);
		break;
      case 9:   rev(str1);
    }
 getch();
}

void address(char *str1)
{
  clrscr();
  cout<<"Your string: "<<str1<<endl<<"Address of each char:-\n\n";
  int x;
   cout<<"\n";
   for(int i=0;str1[i]!='\0';i++)
    {
      x=str1[i];
      cout<<str1[i]<<"  "<<&x<<"\n";
    }
}
void join(char *str1,char *str2)
{
  int i,j;
  clrscr();
  cout<<"Your strings: "<<str1<<endl<<str2<<endl;
  int x=strlen(str1);
  for(j=0;str2[j]!='\0';j++)
  {
    str1[j+x]=str2[j];
  }
  cout<<"Joined string: \n\t";
  puts(str1);
}

void join_strcat(char *str1,char *str2)
{
  clrscr();
  cout<<"Your strings: "<<str1<<endl<<str2<<endl;
  strcat(str1,str2);

  cout<<"Joined string: \n\t";
  puts(str1);
}
void compare(char *str1,char *str2)
{
  clrscr();
  cout<<"Your strings: "<<str1<<endl<<str2<<endl;
  if(strcmp(str1,str2)==0)
    cout<<"\nBoth streings are same.";
  else
    cout<<"\nBoth strings are different!!";
}

void len_ptr(char *str1)
{
 int len;
 for(len=0;str1[len]!='\0';len++);
 cout<<"\n\nLength of the streing is: "<<len;
}

void lwr_to_upr(char *str1)
{
  int len=strlen(str1);
  for (int i=0; i<len; i++)
  {  if(islower(str1[i]))
     str1[i] = toupper(str1[i]);
  }

  cout<<"Altered string: \n\t";
  puts(str1);
}

void upr_to_lwr(char *str1)
{
  int len=strlen(str1);
  for (int i=0; i<len; i++)
  {  if(isupper(str1[i]))
     str1[i] = tolower(str1[i]);
  }
  cout<<"Altered string: \n\t";
  puts(str1);
}
void vowel(char *str1)
{
 clrscr();
  int i,c=0;
  for(i=0;str1[i]!='\0';i++)
  {
    switch(str1[i])
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':   c++;
		  break;
      default: continue;
    }
  }
  cout<<"\nYour string: ";puts(str1);
  cout<<"\n\nNo. of vowels: "<<c;
}

void rev(char *str1)
{
 clrscr();
 cout<<"Your string: "<<str1<<endl;
 int i,j,len=strlen(str1);
 char temp;
 for(i=0,j=len-1;i<len/2;i++,j--)
 {
   temp=str1[i];
   str1[i]=str1[j];
   str1[j]=temp;
 }
 cout<<"\nAfter reversing: "<<str1;
}