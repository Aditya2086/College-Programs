#include<iostream.h>
#include<conio.h>
class Vehicle{
public:
Vehicle()
{
cout<<"This is a Vehicle"<<endl;
}
};
class Fare{
public:
Fare(){
cout<<"Fare of Vehicle"<<endl;
}
};
class car:public Vehicle{
};
class Bus:public Vehicle,public Fare{
};
void main(){
clrscr();
Bus obj;
getch();
}