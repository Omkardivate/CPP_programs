#include<iostream>
using namespace std;
class date
{
	int dd,mm,yy;
	public:
		void show();
		date(int,int,int);
		date(date&);
};

void date::show()
{
	cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
}

date::date(int d,int m,int y)
{
	dd=d;
	mm=m;
	yy=y;
}

date::date(date& d1)
{
	this->dd= d1.dd;
	this->mm= d1.mm;
	this->yy= 2023;
}
int main()
{
	date d1(1,1,2000);
	d1.show();
	
	date d2(d1);
	d2.show();
}
