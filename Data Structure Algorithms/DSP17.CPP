#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[]={4,7,1,3,9,22,15};
int i,temp,j,n,min;
n=(sizeof(a)/sizeof(int));
printf("Before Sorting Array Element Are :-\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[i];
a[i]=a[min];
a[min]=temp;
}
printf("\nAfter Sorting Array Element Are :-\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}