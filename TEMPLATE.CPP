
#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class test
{
public:
	test(t1,t2)//constructor
	{
	}
void area(t1 x,t2 y)
{
t1 t;
t=0.5*x*y;
cout<<"\n area of triangle:"<<t;
}
void area1(t1 x,t2 y)
{
t1 t;
t=x*y;
cout<<"\n area of rectangle:"<<t;
}
void area2(t1 x)
{
cout<<"\n area of circle:"<<3.14*x*x;
}
};
void main()
{
clrscr();
float l,b;

cout<<"\n enter the height & base for traingle:";
cin>>l>>b;
test<float,float>test1(l,b);
test1.area(l,b);

int l1,b1,r;
cout<<"\n enter the l & b:";
cin>>l1>>b1;
test<int,int>test2(l1,b1);
test2.area1(l1,b1);


cout<<"\n enter the radius:";
cin>>r;
test<int,int>test3(r,r);
test3.area2(r);
getch();
}
