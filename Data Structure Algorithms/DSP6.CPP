#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf("Enter The Number :- ");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("Largest Number is A = %d",a);
}
else
{
printf("Largest Number is C = %d",c);
}
}
else
{
if(b>c)
{
printf("Largest Number is B = %d",b);
}
else
{
printf("Largest Number is C = %d",c);
}
}
getch();
}
