#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a1[50],a2[50],i,n;
printf("\nEnter The Size Of Array = ");
scanf("%d",&n);
printf("Enter Array Elements :- ");
for(i=0;i<n;i++)
{
scanf("%d",&a1[i]);
}
printf("\nFirst Array Elements :- ");
for(i=0;i<n;i++)
{
printf("\n%d",a1[i]);
}
for(i=0;i<n;i++)
{
a2[i]=a1[i];
}
printf("\nSecond Array Elements :- ");
for(i=0;i<n;i++)
{
printf("\n%d",a2[i]);
}
getch();
}
