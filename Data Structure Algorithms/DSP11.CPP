#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100],i,n;
printf("Enter The Size Of An Array = \n");
scanf("%d",&n);
printf("Enter The Elements Of Array :- \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Even Numbers In Array Are :- \n");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("%d\n",a[i]);
}
}
printf("Odd numbers in Array Are :- \n");
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
printf("%d\n",a[i]);
}
}
getch();
}