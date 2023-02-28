#include<iostream>
using namespace std;
class person
{
    string name;
    int age;
    public:
    setname(char *str)
    {
       name=str;
    }
    setage(int n)
    {
      age=n;
    }
    getname()
    {
      cout<<name;
    }
    getage()
    {
      cout<<age;
    }
};
class Employee:public person
{
int empid;
int salary;
public:
setempid(int id)
{
empid =id;
}
setsalary(int S)
{
salary=S;
}
getempid()
{
cout<<empid;
}
getsalary()
{
cout<<salary;
}
};
int main()
{
    person s1;
    char line[20]="my name is khan";
    s1.setname(line);
    s1.getname();
    return 0;
}