#include<iostream.h>
#include<conio.h>
#include<process.h>
template<class data>
class Metrix
{
   private:
	    data  temp,arr1[3][3],arr2[3][3];

   public:
	    int ch;

	    void get()
	    {
	      int i,j;
	      cout<<"\nEnter the elements of 1st of matrix 3x3x (row wise): \n";
	      for(i=0;i<3;i++)
		 for(j=0;j<3;j++)
		    cin>>arr1[i][j];

	      if(ch!=4)
	      {
	       cout<<"\nEnter the elements of 2nd of matrix 4x4 (row wise): \n";
	       for(i=0;i<3;i++)
		 for(j=0;j<3;j++)
		    cin>>arr2[i][j];
	      }

	      clrscr();
	      cout<<"\n Recorded array(s): \n\n";
	      for(i=0;i<3;i++)
	      {
		 for(j=0;j<3;j++)
		    cout<<arr1[i][j]<<"  ";
		 cout<<endl;
	      }
	      if(ch!=4)
	      {
		cout<<"\n\n";
		for(i=0;i<3;i++)
		{
		   for(j=0;j<3;j++)
		      cout<<arr2[i][j]<<"  ";
		   cout<<endl;
		}
	      }
	     getch();
	    }

	    void  sum()
	    {
	      get();
	       data arr_sum[3][3];
	       for(int i=0;i<3;i++)
		  for(int j=0;j<3;j++)
		     arr_sum[i][j]=arr1[i][j]+arr2[i][j];
	       cout<<"\nResultent array after addition: \n\n";

	       for(i=0;i<3;i++)
	       {
		  for(j=0;j<3;j++)
		     cout<<arr_sum[i][j]<<"  ";
		  cout<<endl;
	       }
	      getch();
	    }

	    void differance()
	    {
	      get();
	       data  arr_diff[3][3];
	       for(int i=0;i<3;i++)
		  for(int j=0;j<3;j++)
		     arr_diff[i][j]=arr1[i][j]-arr2[i][j];
	       cout<<"\nResultent array after addition: \n\n";

	       for(i=0;i<3;i++)
	       {
		  for(j=0;j<3;j++)
		     cout<<arr_diff[i][j]<<"  ";
		  cout<<endl;
	       }
	     getch();
	    }

	    void product()
	    {
	      get();
	       data arr_pro[3][3];
	       int i,j,k;

	       for(i=0;i<3;i++)
		  for(j=0;j<3;j++)
		     arr_pro[i][j]=0;


	       for(i=0;i<3;i++)
	       {
		  for(j=0;k<3;j++)
		  {
		     for(k=0;k<3;k++)
		     {
		       arr_pro[i][j] += arr1[i][k] * arr2[k][j] ;
		     }
		  }
	       }

	       for(i=0;i<3;i++)
	       {
		  for(j=0;j<3;j++)
		     cout<<arr_pro[i][j]<<"  ";
		  cout<<endl;
	       }

	     getch();
	    }

	    void transpose()
	    {
	      get();
	       for(int i=0;i<3;i++)
		  for(int j=i;j<3;j++)
		  {
		     temp=arr1[i][j];
		     arr1[i][j]=arr1[j][i];
		     arr1[j][i]=temp;
		  }

	       cout<<"\n\nTranspose: \n\n";
	       for(i=0;i<3;i++)
	       {
		  cout<<endl;
		  for(j=0;j<3;j++)
		     cout<<arr1[i][j]<<"  ";
	       }
	     getch();
	    }
};

void main()
{
     Metrix<int> M;
     int c=0;

  START:
  clrscr();
     cout<<"\t\t\tMENU"
	 <<"\n\t_________________";
     cout<<"\n\nEnter any one among following:-\n";
     cout<<"\n1)SUM"
	 <<"\n2)DIFFERANCE"
	 <<"\n3)PRODUCT"
	 <<"\n4)TRANSPOSE"
	 <<"\n* Any other key to get exit.";
     cin>>M.ch;

     switch(M.ch)
     {
       case 1:    M.sum();
		  break;
       case 2:    M.differance();
		  break;
       case 3:    M.product();
		  break;
       case 4:    M.transpose();
		  break;
       default:   exit(0);
     }

   cout<<"\n\nPerform opration on other array(s)? Enter 1 for YES & 2 for NO: ";
   cin>>c;
   if(c==1)
     goto START;
}

