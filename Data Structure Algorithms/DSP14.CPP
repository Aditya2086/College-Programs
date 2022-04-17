#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[]={3,5,1,7,9,52};
int s=(sizeof(a)/sizeof(int));
int i,count=0,search;
printf("Enter The Element Want To Search :- \n");
scanf("%d",&search);
for(i=0;i<s;i++)
{
if(a[i]==search)
{
count++;
break;
}
}
if(count==1)
printf("Element is Found in Location = %d ",i);
else
printf("Element is Not Found");
getch();
}