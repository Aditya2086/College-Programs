#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={11,22,33,44,55},i;
printf("The Elements of Array :- \n");
clrscr();
for(i=0;i<5;i++)
{
printf("%d\n",a[i]);
}
printf("The Elements in Reverse Order :- \n");
for(i=4;i>=0;i--)
{
printf("%d\n",a[i]);
}
int b=a[0];
for(i=0;i<5;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
int c=a[0];
for(i=0;i<5;i++)
{
if(a[i]<c)
{
c=a[i];
}
}
printf("The Largest Number in Array is = %d\n",b);
printf("The Smallest Number in Array is = %d\n",c);
getch();
}
