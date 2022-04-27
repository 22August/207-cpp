#include<iostream.h>
#include<conio.h>
class stud
{
private:
int rollno;
char name;
public:
void get();
void display();
};
void stud::get()
{
cout<<"enter rollno:";
cin>>rollno;
cout<<"enter name:";
cin>>name;
cout<<endl;
}
void stud::display()
{
cout<<"roll no:"<<rollno<<endl;
cout<<"name:"<<name<<endl;
cout<<endl;
};
class mark:public stud
{
protected:
int m,m1;
public:
void get();
void display();
};
void mark::get()
{
stud::get();
cout<<"enter mark first sub:";
cin>>m;
cout<<"enter mark second sub:";
cin>>m1;
cout<<endl;
}
void mark::display()
{
stud::display();
cout<<"mark first sub:";
cout<<"mark second sub:";
cout<<endl;
}
class info
{
private:
int age;
char add[40];
public:
void get();
void display();
};
void info::get()
{
cout<<"enter age:";
cin>>age;
cout<<"enter address:";
cin>>add;
cout<<endl;
}
class result:public mark,public info
{
private:
int total;
public:
void get();
void display();
};
void result::get()
{
mark::get();
info::get();
total=m+m1;
}
void result::display()
{
mark::display();
info::display();
cout<<"total of three sub:"<<total<<endl;
}
void main()
{
clrscr();
result s;
s.get();
s.display();
getch();
}
