#include<iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter Two Numbers = ";
cin>>a>>b;
try
{
if(b==0)
throw b;
else
cout<<a/b;
}
catch(int r)
{
cout<<"Second Operand Cannot Be Zero";    
}
return 0;
}
