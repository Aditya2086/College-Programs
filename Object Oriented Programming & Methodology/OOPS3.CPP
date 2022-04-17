#include<iostream.h>
#include<conio.h>
class integer
{
int m,n;
public:
integer(int,int);
void display(void)
{
cout<<"m="<<m<<"\n";
cout<<"n="<<n<<"\n";
}
};
integer::integer(int x,int y)
{
m=x;
n=y;
}
int main()
{
integer int1(0,100);
integer int2=integer(25,75);
clrscr();
cout<<"\nobject1"<<endl;
int1.display();
cout<<"\nobject2"<<endl;
int2.display();
getch();
}
