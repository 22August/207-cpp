//program for demonstrate function template for finding maximum number between 2 number
#include<iostream.h>
#include<conio.h>
template<class t>
t max(t a,t b)
{
	if(a>b)
		return a;
	else
		return b;
}
	void main()
	{
		clrscr();

	char ch1,ch2,ch3;
	cout<<"\nenter two character:";
	cin>>ch1>>ch2;
	cout<<"\n*************\n";
	cout<<"\n maximum character is:\n";

	ch3=max(ch1,ch2);

	cout<<"\nch3:\t"<<ch3;

	 cout<<"\n**********\n";
	 int a,b,c;
	 cout<<"\n enter two integers:\n";
	 cin>>a>>b;
	 cout<<"\n*******\n";
	 cout<<"\n maximum integer is:\n";

	 c=max(a,b);

	 cout<<"\nc:\t"<<c;
	 getch();
}