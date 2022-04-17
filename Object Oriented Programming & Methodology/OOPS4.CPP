#include<iostream.h>
#include<conio.h>
class Vehicle {
public:
Vehicle()
{
cout<<"This is a Vehicle"<<endl;
}
};
class FourWheeler {
public:
FourWheeler()
{
cout<<"This is a 4 wheeler Vehicle"<<endl;
}
};
class Car:public Vehicle,public FourWheeler {
};
void main()
{
Car obj;
getch();
}