#include<iostream>
using namespace std;
class Marks
{
protected:
int p,c,m;
public:
void setmarks(int x,int y,int z)
{
p=x;
c=y;
m=z;
}
};
class Smarks:public Marks
{
public:
int sum()
{
return p+c+m;
}
};
class Percentage: public Smarks
{
public:
void percentage()
{
    cout<<"percentage is: "<<(sum()*1.0)/3;
}
};
int main()
{

Percentage s1;
s1.setmarks(90,87,60);
s1.percentage();

    return 0;
}