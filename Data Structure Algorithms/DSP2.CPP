#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,a,b,c,d,e,P;
printf("Enter Your Name :- ");
scanf("\n%s",&n);
printf("Enter Maths Marks :- ");
scanf("\n%d",&a);
printf("Enter Science Marks :- ");
scanf("\n%d",&b);
printf("Enter Hindi Marks :- ");
scanf("\n%d",&c);
printf("Enter English Marks :- ");
scanf("\n%d",&d);
printf("Enter Social Science Marks :- ");
scanf("\n%d",&e);
P=(a+b+c+d+e)/5;
printf("Percentage = %d",P);
if(P>=80&&P<=100)
{
printf("\nMerit",P);
}
else if(P>=60&&P<=79)
{
printf("\nFirst Division",P);
}
else if(P>=50&&P<=59)
{
printf("\nSecond Division",P);
}
else if(P>=40&&P<=49)
{
printf("\nThird Division",P);
}
else
{
printf("\nFail",P);
}
getch();
}