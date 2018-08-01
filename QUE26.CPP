#include<fstream.h>
#include<ostream.h>
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

    fstream doc("student.txt",ios::in);
    if(!doc)
    {
      cout<<"File can not be opened!!";
      exit(0);
    }

    cout<<"Enter following for 10 students, one by one.\n";
   for(i=0;i<10;i++)
    {
      doc.read((char *)&stu[i],sizeof(Student));

     cout<<"\n\n";
      cout<<"\n Details of student "<<i+1<<" :-\n";
      cout<<"\n  Roll-No.: "<<stu[i].roll_no;
      cout<<"\n  Name: "<<stu[i].name;
      cout<<"\n  Total Marks: "<<stu[i].marks;
      cout<<"\n_________________________";

    }

    doc.close();

  getch();
}