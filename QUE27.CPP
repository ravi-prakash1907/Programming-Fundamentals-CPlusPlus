#include<fstream.h>
#include<conio.h>
#include<process.h>

void main()
{
  clrscr();

   char ch;

    fstream doc1("main.txt",ios::in);
    fstream doc2("copy.txt",ios::out);
    if((!doc1)||(!doc2))
    {
      cout<<"File can not be opened!!";
      getch();
      exit(0);
    }

    while(doc1)
    {
      doc1>>ch;
      doc2<<ch;
    }

    doc1.close();
    doc2.close();

    cout<<"\n\n\tNew file has been created after removing all white spaces!";
    cout<<"\n\t__________________________________________________________\n\n";
    fstream doc("copy.txt",ios::in);
    while(doc>>ch)
    {
      cout<<ch;
    }

    doc.close();

  getch();
}