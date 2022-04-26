//program for demonstrate class template
#include<iostream.h>
#include<conio.h>
template<class t1,class t2>
class test
{
public:
test(t1 a, t2 b)//constructor
{
	cout<<a<<"\t"<<b;
}
void swap (t1 x, t2 y)
{
t1 t;
t=x;
x=y;
y=t;
cout<<"/nx:"<<x<<"\t y:"<<y;
}
};
void main()
{
	clrscr();

	int p,q;
	cout<<"\n enter two integar for swap x & y:";
	cin>>p>>q;
	cout<<"\n before swap x & y:\n";
	test<int,int>test1(p,q);
	cout<<"\n after swap x & Y:\n";
	test1.swap(p,q);

	char a,b;
	cout<<"\n enter two character for swap x & y:\n";
	cin>>a>>b;
	test<char,char>test2(a,b);
	cout<<"\n After Swapping x & y \n";
	test2.swap(a,b);
	getch();
}