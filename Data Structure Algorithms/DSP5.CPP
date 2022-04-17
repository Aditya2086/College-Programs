#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,f=1,n;
printf("Enter A Number :- ");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("The Factorial of %d is = %d",n,f);
getch();
}