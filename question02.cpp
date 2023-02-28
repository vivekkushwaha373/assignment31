#include<iostream>
using namespace std;
class base
{
int x,y;
public:
void setnumber(int x,int y)
{
    this->x=x;
    this->y=y;
}
protected:
int getsum1()
{
    return x+y;
}
};
class derived: public base//single inheritace
{
public:
void getsum()
{
    cout<<"Sum is : "<<getsum1();
}
};
int main()
{
    derived b1;
    b1.setnumber(2,3);
    b1.getsum();
    return 0;
}