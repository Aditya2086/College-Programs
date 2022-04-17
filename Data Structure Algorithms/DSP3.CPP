#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,s=0;
printf("Enter The Number :- ");
scanf("%d",&i);
while(i>0)
{
s=s*10+i%10;
i=i/10;
}
printf("Reversed :- %d\n",s);
getch();
}