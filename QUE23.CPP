#include<iostream.h>
#include<conio.h>

class Triangle
{
 private:
	  float base, hight;
	  int choice;

 protected:
	  int area(int a)
	  {
	    int x=(base*hight)/2;
	    return(x);
	  }

	  float area()
	  {
	    float x=(base*hight)/2;
	    return(x);
	  }

 public:
	  Tringle()
	  {
	    base=00.00;
	    hight=00.00;
	  }

	  void des()
	  {
	    int a;  float b;
	    if(choice==1)
	    {
	      a=area(0);
	      cout<<a<<" sq. cm";
	    }
	    else
	    {
	      b=area();
	      cout<<b<<" sq. cm";
	    }
	  }

	  void getdata()
	  {
	    cout<<"Enter the base: ";
	    cin>>base;
	    cout<<"Enter the hight: ";
	    cin>>hight;
	    cout<<"Enter 1 if required ans. should be in integer, else any other key: ";
	    cin>>choice;
	  }

	  void putdata()
	  {
	    cout<<"\nHight: "<<hight<<" cm";
	    cout<<"\nBase: "<<base<<" cm";
	    cout<<"\nArea: ";
	  }

};
void main()
{
  clrscr();
  Triangle t1;

    t1.getdata();
    t1.putdata();
    t1.des();

  getch();
}