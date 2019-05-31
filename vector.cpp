#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<math.h>
#include<string.h>
using namespace std;
class vector {
	private :
		int n;   // so chieu cua vector 
		float *a;  // cac thanh phan cua vector
	public :
		float getsochieuvector()
		{
			return n;
		}
		float getdodaivector()
		{   
		    float dodai=0;
		    for (int i=0;i<getsochieuvector();i++)
		    dodai+=pow(*(a+i),2);
			return dodai;
		}
		friend istream& operator >> (istream& in , vector &x);
		friend ostream& operator << (ostream& ao , vector x);
		friend void timvectormax (vector b[],int slvt)
		{   float max=0;
			for (int i=0;i<slvt;i++)
			{
				if (b[i].getdodaivector()>max)
				max = b[i].getdodaivector();
			}
			cout<<"\n\nVector lon nhat : ";
			for (int i=0;i<slvt;i++)
			{
				if (b[i].getdodaivector()==max)
				{
					cout<<b[i];
				    cout<<"\n";
				}
			}
		}
		friend void timvectormin (vector b[],int slvt)
		{   float min=b[0].getdodaivector();
			for (int i=1;i<slvt;i++)
			{
				if (b[i].getdodaivector()<min)
				min = b[i].getdodaivector();
			}
			cout<<"\nVector nho nhat : ";
			for (int i=0;i<slvt;i++)
			{
				if (b[i].getdodaivector()==min)
				{
				   cout<<b[i];
				   cout<<"\n";
				}
			}
		}
};
istream& operator >> (istream& in,vector &x)
{
	cout<<"\n\tNhap so chieu cua vector : ";in>>x.n;
	x.a = new float [x.n];
	for (int i=0;i<x.n;i++)
	{   
		cout<<"\nNhap toa do chieu thu "<<i+1<<" : ";
		in>>*(x.a+i);
		cout<<"\n";
	}  
	return in;
}
ostream& operator << (ostream& ao,vector x)
{
	ao<<"(";
	for (int i=0;i<x.n;i++)
	{	
	    if (i==x.n-1)
	    ao<<*(x.a+i);
	    else
	    ao<<*(x.a+i)<<",";
	}
	ao<<")";
	delete[] x.a;  // giai phong bo nho cua con tro a ;
	return ao;
}
main ()
{
	vector b[50];
	int slvt;
	cout<<"\nNhap so luong vector : ";cin>>slvt;
	for (int i=0;i<slvt;i++)
	{   cout<<"\n\t\t\t\tNhap toa do vector thu "<<i+1<<endl;
		cin>>b[i];
		cout<<"\nBan vua nap vector : ";
		cout<<b[i];
		cout<<"\n";
	}
	cout<<"\n";
	timvectormax(b,slvt);
	timvectormin(b,slvt);
return 0;
}
