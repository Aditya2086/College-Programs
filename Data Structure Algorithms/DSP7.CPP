#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,i,n,s=0;
printf("Enter The Number :- ");
scanf("%d",&n);
a=n;
while(n>0)
{
i=n%10;
s=s+(i*i*i);
n=n/10;
}
if(s==a)
{
printf("\n This Number is An Armstrong Number");
}
else
{
printf("\n This Number is Not An Armstrong Number");
}
getch();
}