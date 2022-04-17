#include<iostream.h>
#include<conio.h>
class student{
int rno;
public:
void getnumber(){
cout<<"Enter Roll No: ";
cin>>rno;
}
void putnumber(){
cout<<"\nRoll No: "<<rno<<"\n";
}
};
class test:virtual public student{
public:
int part1,part2;
void getmarks() {
cout<<"Enter Marks\n";
cout<<"Part 1: ";
cin>>part1;
cout<<"Part 2: ";
cin>>part2;
}
void putmarks() {
cout<<"\nMarks Obtained";
cout<<"\nPart 1: "<<part1;
cout<<"\nPart 2: "<<part2;
}
};
class sports:public virtual student {
public:
int score;

void getscore() {
cout<<"Enter Sports Score: ";
cin>>score;
}

void putscore() {
cout<<"\nSports Score is : "<<score;
}
};
class result:public test,public sports {
int total;
public:

void display() {
total = part1 + part2 + score;
putnumber();
putmarks();
putscore();
cout<<"\nTotal Score : "<<total;
}
};
void main(){
result obj;
clrscr();
obj.getnumber();
obj.getmarks();
obj.getscore();
obj.display();
getch();
}