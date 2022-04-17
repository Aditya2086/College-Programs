#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
printf("Enter The Numbers :- ");
scanf("%d",&n);
i=1;
while(i<=n)
{
sum=sum+i;
i++;
}
printf("The Sum is = %d",sum);
getch();
}