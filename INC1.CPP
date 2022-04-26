//program for demonstrate encapsulation using class
#include<iostream.h>
#include<conio.h>
class stud
{
     private:
	int m1,m2,rollno,total;
	float avg;
	char name[20];
     public:
	void get();
	void put();
};
void stud::get()
{
    cout<<"\n enter Roll number:";
    cin>>rollno;
    cout<<"\n enter name:";
    cin>>name;
    cout<<"\n enter marks in subject1:";
    cin>>m1;
    cout<<"\n enter marks in subject2:";
    cin>>m2;
}
void stud::put()
{
    total=0;
    total=m1+m2;
    avg=total/2;
    cout<<"\n";
    cout<<"\n output is:";
    cout<<"\n rpll number=>\t";
    cout<<rollno;
    cout<<"\n name=> \t";
    cout<<"\n marks is subject1=>\t";
    cout<<m1;
    cout<<"\n marks is subject=>\t";
    cout<<m2;
    cout<<"\n totalmarks=> \t";
    cout<<total;
    cout<<"\n average=> \t";
    cout<<avg;
}
void main()
{
  clrscr();
  stud s;
  s.get();
  s.put();
  getch();
}