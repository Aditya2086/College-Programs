#include<stdio.h>
#include<conio.h>
void main()
{
int a[]={2,4,7,9,11,13,25};
int mid,low,high,search,count=0;
int location;
clrscr();
low=0;
high=6;
printf("Enter The Element You Want To Search :- \n");
scanf("%d",&search);
while(low<=high)
{
mid=(low+high)/2;
if (a[mid]==search)
{
location=mid;
count++;
break;
}
if(a[mid]<search)
low=mid+1;
else
high=mid-1;
}
if(count==1)
printf("Element is Found At Location = %d",location);
else
printf("Element is Not Found");
getch();
}
