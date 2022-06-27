11. Wap to implement 0/1 knapsack Problem using Dynamic
programing.
#include<iostream.h>
#include<conio.h>
void main()
{
int p[4]={0,1,3,5};
int w[4]={0,2,1,4};
int m=6;
int n=3;
int k[4][7];
for( int i=0;i<=n;i++)
{
for(int w=0;w<=m;w++)
{
if(i==0 || w==0)
k[i][w]=0;
else if
k[i][w]=max(k[i-1][w],k[i-1][w-w[i]+p[i])
else
k[i][w]=k[i-1][w];
}
}
cout<<”maximum profit==”<<k[n][w];
}