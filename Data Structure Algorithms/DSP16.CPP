#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[]={4,7,1,3,9,22,15};
int i,temp,j,n;
n=(sizeof(a)/sizeof(int));
printf("Before Sorting Array Element Are :-\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j+1];
a[j+1]=a[j];
a[j]=temp;
}
}
}
printf("\nAfter Sorting Array Element Are :-\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch();
}