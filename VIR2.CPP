#include<iostream.h>
#include<conio.h>
class base
{
public:
void display()
{
  cout<<"\n display() in base class.....";
}
virtual void show()
{
   cout<<"\n show() in base class......";
}
};
class derived:public base
{
public:
void display()
{
   cout<<"\n display() in base class....";
}
void show() //redefined function
{
    cout<<"\n show() in derived class.....";
}
};
void main()
{
  clrscr();
    base *b; //base class pointer
    base b1; //base class object
     b=&b1; //base class object address
     b->display();
     b->show();
     b->show();
     derived d;
     b=&d;
     b->display();
     b->show();
      getch();
}
