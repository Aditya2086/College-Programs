#include<iostream.h>
#include<conio.h>
class abc{
int m,n;
public:
abc(){
m=8;
n=9;
}
void show(){
cout<<m<<n;
}
operator-()
{
m = -m;
n = -n;
return m,n;
}
};
void main(){
abc x;
clrscr();
x.show();
-x;
x.show();
getch();
}