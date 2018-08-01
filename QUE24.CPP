#include<iostream.h>
#include<conio.h>\

class box
{
   int l,b,h;
  public:

    box()
    {
      l=0;
      b=0;
      h=0;
    }
    box(int p,int q,int r)
    {
      l=p;
      b=q;
      h=r;
    }

    void input()
    {
      cout<<"\nEnter the length, breadth & hight of the box: ";
      cin>>l>>b>>h;
    }

    void s_a()
    {
      cout<<"\nTotal Serface Area: "<<2*((l*b)+(b*h)+(h*l));
    }

    void volume()
    {
       cout<<"\nVolume:"<<(l*b*h);
    }


    box operator++()
    {
      box b1;
      b1.l=l++;
      b1.b=b++;
      b1.h=h++;
      return b1;
    }

    box operator++(int i)
    {
      box b1;
      b1.l=++l;
      b1.b=++b;
      b1.h=++h;
      return b1;
    }

    box operator--()
    {
      box b1;
      b1.l=l--;
      b1.b=b--;
      b1.h=h--;
      return b1;
    }

    box operator--(int i)
    {
      box b1;
      b1.l=--l;
      b1.b=--b;
      b1.h=--h;
      return b1;
    }

    int operator==(box b2)
    {
      int c=0;
      if((l*b*h)==(b2.l*b2.b*b2.h))
	{
	   c++;
	}
      return c;
    }

    void operator=(box &b2)
    {
      l=b2.l;
      b=b2.b;
      h=b2.h;
    }

    void iscube()
    {
      if((l==b)&&(l==h))
	cout<<"It\'s a cube!!\n";
      else
	cout<<"It\'s a cuboid!!\n";
    }

    void disp()
    {
      cout<<"\nLength: "<<l
	  <<"\nBreadth: "<<b
	  <<"\nHeight: "<<h<<endl;
    }

};

void main()
{
  clrscr();

  int choice;
  box b1;

  cout<<"This program does some opration on C++ class(es) BOX!!\n";

    cout<<"\n    MENU"
	<<"\n __________\n";
    cout<<"\nChoose for box:-\n"
	<<"\n1) Calculate Surface Area"
	<<"\n2) Calculate Volume"
	<<"\n3) Overload post-increment operator(++)"
	<<"\n4) Overload pre-increment operator(++)"
	<<"\n5) Overload post-decrement operator(--)"
	<<"\n6) Overload pre-decrement operator(--)"
	<<"\n7) Overload operator =="
	<<"\n8) Overload assignment operator(=)"
	<<"\n9) Check if box is cube"
	<<"\n* Enter any other key to get exit!\n\n";
    cin>>choice;

    clrscr();
    switch(choice)
    {
     case 1:     {
		    b1.input();
		    b1.s_a();
		    break;
		 }
     case 2:     {
		    b1.input();
		    b1.volume();
		    break;
		 }
     case 3:     {
		    b1.input();
		    b1++;
		    cout<<"\nAfter post-increment:\n";
		    b1.disp();
		    break;
		 }
     case 4:     {
		    b1.input();
		    ++b1;
		    cout<<"\nAfter pre-increment:\n";
		    b1.disp();
		    break;
		 }
     case 5:     {
		    b1.input();
		    b1--;
		    cout<<"\nAfter post-decrement:\n";
		    b1.disp();
		    break;
		 }
     case 6:     {
		    b1.input();
		    --b1;
		    cout<<"\nAfter pre-decrement:\n";
		    b1.disp();
		    break;
		 }
     case 7:     {
		    box b2;
		    cout<<"For box 1:-\n";
		    b1.input();
		    cout<<"For box 2:-\n";
		    b2.input();
		    if(b1==b2)
			cout<<"\nBoth boxes are equal!";
		    else
			cout<<"\nBoth boxes are not equal!";
		    break;
		 }
     case 8:     {
		    box b2(2,3,4);
		    cout<<"For box 1:-\n";
		    b1.input();
		    cout<<"By default, dimentions of box 2:";
		    b2.disp();
		    b2=b1;
		    cout<<"\nDimentions of box 2 after using assignment operator:";
		    b2.disp();
		    break;
		 }
     case 9:     {
		    b1.input();
		    b1.iscube();
		    break;
		 }

     default :   cout<<"\nInvalid input!!!";
		 break;
    }


  /*
    box b2,b3;
    b2.input();
    b3.input();

    b2.disp();
    b2=b3;
    b2.disp();

    int c=(b2==b3);
    cout<<c<<endl;

      if(c==1)
	cout<<"Both boxes are equal.";
      else
	cout<<"Both boxes are not equal.";

   */

  getch();
}