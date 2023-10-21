#include<iostream>
using namespace std;

class Date1
{
	protected:
		int dd,mm,yy;
	public:
		Date1()
		{
			dd=1;
			mm=1;
			yy=2000;
		}
		Date1(int d,int m,int y)
		{
			dd=d;
			mm=m;
			yy=y;
		}
		void add(int d,int m,int y)
		{
			if( (1<=(dd+d) && (dd+d)<=31) && ( (mm+m)>=1 && (mm+m)<=12) )
			{
				dd=dd+d;
				mm=mm+m;
				yy=yy+y;
			}
			else
				cout<<"Exceeds limit";
		}
		void sub(int d,int m,int y)
		{
			if( ( (dd-d)>0 && (dd-d)<31) && ( (mm-m)>0 && (mm-m)<12) )
			{
				dd=dd-d;
				mm=mm-m;
				yy=yy-y;
			}
			else
				cout<<"below limit";
		}
		void display()
		{
			cout<<"date: ";
			cout<<dd<<"/"<<mm<<"/"<<yy;
		}
};

class Time: public Date1
{
	protected:
		int hh,mm,ss;
	public:
		Time()
		{
			hh=1;
			mm=1;
			ss=1;
		}
		Time(int d1,int m1,int y1,int h,int m,int s): Date1(d1,m1,y1)
		{
			hh=h;
			mm=m;
			ss=s;
		}
		void add(int h,int m,int s)
		{
			Date1::add(h,m,s);
			if( ( (hh+h)>=1 && (hh+h)<=24) && ( (mm+m)>=1 && (mm+m)<=60) && ( (ss+s)>=1 && (ss+s)<=60))
			{
				hh=hh+h;
				mm=mm+m;
				ss=ss+s;
			}
			else
				cout<<"Exceeds limit ";
		}
		void sub(int h,int m,int s)
		{
			Date1::sub(1,1,1);
			if( ( (hh-h)>=1 && (hh-h)<=24) && ( (mm-m)>=1 && (mm-m)<=60) && ( (ss-s)>=1 && (ss-s)<=60))
			{
				hh=hh-h;
				mm=mm-m;
				ss=ss-s;
			}
			else
				cout<<"below limit";
		}
		void display()
		{
			Date1::display();
			cout<<"  "<<hh<<":"<<mm<<":"<<ss<<endl;
		}
};

int main()
{
	Time t(23,9,2023,2,30,12);
	t.display();
	t.add(2,2,2);
	t.display();
	t.sub(1,1,1);
	t.display();
	return 0;
}
