#include<iostream.h>
#include<conio.h>
int volume(int s)
{
clrscr();
return(s*s*s);
}
double volume(double r,int h)
{
return(3.14*r*r*h);
}
long volume(float l,long b,int h)
{
return(l*b*h);
}
void main()
{
cout<<volume(10)<<endl;
cout<<volume(11.5,2)<<endl;
cout<<volume(12.56,10,2)<<endl;
getch();
}