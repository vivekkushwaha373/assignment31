#include<iostream>
using namespace std;
class B;//forward declaration
class A
{
int x;
friend void input(A&,B&);
public:
A(int in)
{
x=in;
}
void display()
{
    cout<<"x= "<<x<<endl;
}
};

class B
{
int y;
friend void input(A&,B&);
public:
B(int in)
{
    y=in;
}
void display()
{
    cout<<"y= "<<y<<endl;
}
};
void input(A &C,B &D)
{   
    int a;
    a=C.x;
    C.x=D.y;
    D.y=a;
}
int main()
{
A a1(3);
B b1(4);
input(a1,b1);
a1.display();
b1.display();

    return 0;
}