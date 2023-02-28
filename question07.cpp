#include<iostream>
using namespace std;
class Employee
{
int Employee_no;
char name[20];
int salary;
virtual void status()
{


}
};
class Fulltime:public Employee
{


public:
void getsalary()
{

}
void status()
{
    cout<<"Fulltime";
}
};
class Parttime:public Employee
{



};




int main()
{
int n,in;
char str[10];
cout<<"Enter Record"<<endl;
cout<<"Display Record"<<endl;
cout<<"Search Record"<<endl;
cout<<"Quit"<<endl;
cout<<endl;
cout<<"Enter your Choice :";
cin>>n;
Fulltime f1;
Parttime p1;
Employee *e1=NULL;

label:   
switch(n)
{
    case 1:
    cout<<"Enter Employee Number: ";
    cin>>
    break:
    case 2:

    break:
    case 3:

    break:
    case 4:

    break:
    default:
    cout<<"you have chosen a wrong option ";
    cout<<endl<<"Enter the option again: ";
    cin>>n;
    goto label;
}

}