#include<iostream.h>
#include<conio.h>
class sample
{
int a;
int b;
public:
void setvalue(){a=25;b=40;}
friend float mean(sample s);
};
float mean(sample s)
{
return float(s.a+s.b)/2.0;
}
void main()
{
clrscr();
sample x;
x.setvalue();
cout<<"Mean Value = "<<mean(x)<<endl;
getch();
}