#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

struct Student
{
  int roll_no,std,year,marks;
  char name[25];
};

void main()
{
  clrscr();

   int i;

    Student stu[10];

    fstream doc("student.txt",ios::out);
    if(!doc)
    {
      cout<<"File can not be created!!";
      exit(0);
    }

    cout<<"Enter following for 10 students, one by one.\n";
   for(i=0;i<10;i++)
    {
     clrscr();
      cout<<"Enter for student "<<i+1<<" :-\n";
      cout<<"\nRoll-No.: ";
      cin>>stu[i].roll_no;
      cout<<"\nName: ";
      gets(stu[i].name);
      cout<<"\nClass: ";
      cin>>stu[i].std;
      cout<<"\nYear: ";
      cin>>stu[i].year;
      cout<<"\nTotal Marks: ";
      cin>>stu[i].marks;

      doc.write((char *)&stu[i],sizeof(Student));
    }

    doc.close();

    cout<<"\n\nFile created!\n";

  getch();
}