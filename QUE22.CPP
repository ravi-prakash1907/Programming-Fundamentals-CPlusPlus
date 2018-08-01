#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Person
{
   protected:
		char name[20];
   public:
		virtual void get()
		{
			cout<<"Enter following details:-\n\n";
			cout<<"Your Name: ";
			gets(name);
		}
		virtual void display()=0;
};

class student:public Person
{
	protected:
		int Class,rollno;
	public:

		student()
		{
			clrscr();
			cout<<"\nObject for student class has been created. \nPlease enter the details of the student!\n\n";
			getch();
		}

		~student()
		{
			cout<<"\nDeleting the object of student!";
			getch();
		}

		void get()
		{
		       Person::get();
			cout<<"Class: ";
			cin>>Class;
			cout<<"Roll no.: ";
			cin>>rollno;
		}
		void display()
		{
			cout<<"\n\nDetails entered by you:-\n";
			cout<<"\nName: "<<name
				<<"\nClass: "<<Class
				<<"\nRoll no.: "<<rollno;
			getch();
				}
};

class teacher:public Person
{
	protected:
		char post[8],subject[20];
	public:

		teacher()
		{
			clrscr();
			cout<<"\nObject for teacher class has been created. \nPlease enter the details of the teacher!\n\n";
			getch();
		}

		~teacher()
		{
			cout<<"\nDeleting the object of teacher!";
			getch();
		}

		void get()
		{
		       Person::get();
			cout<<"Post (TGT/PGT etc.): ";
			gets(post);
			cout<<"Subject: ";
			gets(subject);
		}
		void display()
		{
			cout<<"\n\nDetails entered by you:-\n";
			cout<<"\nName: "<<name
				<<"\nPost: "<<post
				<<"\nSubject: "<<subject;
			getch();
		}
};

void main()
{
   clrscr();
	Person *s=new student;
	s->get();
	s->display();
	delete s;
	cout<<"\n\nObject is deleted now!";
	getch();

	Person *t=new teacher;
	t->get();
	t->display();
	delete t;
	cout<<"\n\nObject is deleted now!";

   getch();
}