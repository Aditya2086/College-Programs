#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,a=0,b=1,c;
printf("Enter Number Of Terms:- ");
scanf("%d",&n);
printf("Fibonacci Series is :- \n");
for(i=1;i<=n;i++)
{
printf("%d\n",a);
c=a+b;
a=b;
b=c;
}
getch();
}
