#include<iostream.h>
#include<conio.h>
class Test{
int code;
static int count;
public:
void setcode(void){
code=++count;
}
void showcode(void){
cout<<"Object Number : "<<code<<endl;
}
static void showcount(void){
cout<<"Count = "<<count<<endl;
}
};
int Test::count;
void main(){
clrscr();
Test t1,t2;
t1.setcode();
t2.setcode();
Test::showcount();
Test t3;
t3.setcode();
Test::showcount();
t1.showcode();
t2.showcode();
t3.showcode();
getch();
}