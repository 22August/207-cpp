#include<iostream.h>
#include<conio.h>
class demo
{
private:
int x;
public:
demo()//default constructor
{
cout<<"/n constructor with no parameter:";
}
demo(int a)//one argument constructor
{
x=a;
cout<<"\n constructor with one parameter"<<x;
cout<<"\n square of a=>"<<x*x;
}
demo(int a,int b)//two argument constructor
{
cout<<"\n constructor with two parameters"<<a<<""<<b;
cout<<"\n square of a+b=>"<<a+b;
}
demo(demo&d)//copy constructor
{
cout<<"\n copy constructor";
x=d.x;
cout<<"\n copied value=>"<<x;
}
};
void main()
{
clrscr();
demo d1;//default constructor
demo d2(10); //constructor with 1 parameter
demo d3(20,30); //constructor with 2 parameter
demo d4(d2); //copy constructo
getch();
}