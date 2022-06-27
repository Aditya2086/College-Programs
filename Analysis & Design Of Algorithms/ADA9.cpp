9. Wap to implement fractional knapsack problem.
#include<iostream.h>
#include<conio.h>
void main()
{
int w[3]={2,4,4};
int p[3]={1,4,8};
int m,profit,i,n;
n=3; m=10; profit=0;
for(i=0;i<3;i++)
{
if(m>0 &&w[i]<=m)
{
m=m-w[i];
profit=profit+p[i]
}
else
break;
}
if(m>0)
{
profit=profit+p[i]*(m/w[i]);
}
cout<<profit; }