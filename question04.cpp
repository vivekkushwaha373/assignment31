#include<iostream>
using namespace std;
class Person
{
char address[20],phone_no[20];
public:

void ephone()
{
    cin.ignore();
    cin.getline(phone_no,20);
    
}
void eaddress()
{
    cin.ignore();
    cin.getline(address,20);
    
}

};
class Employee: public Person
{

int eno;
char ename[20];
public:
void getname()
{
    cout<<ename;
}
void eno1()
{
    cin>>eno;
    
}
void ename1()
{
    cin.ignore();
    cin.getline(ename,20);
    
}
};
class Manager: public Employee
{
char designation[20];char department[20];
int basic_salary;
public:
int salary()
{
return basic_salary;
}
void edesignation()
{
    cin.ignore();
    cin.getline(designation,20);
    
}
void edepartment()
{
    cin.ignore();
    cin.getline(department,20);

}
void ebasic_salary()
{
  
  cin>>basic_salary;
  
}
};
int main()
{
  int in;
  cout<<"How many managers do you want to enter? :";
  cin>>in;
  Manager s1[in];
  for(int i=0;i<in;i++)
  { 
    cout<<"Enter details of manager"<<endl;
    cout<<"------------------------"<<endl;
    cout<<"Enter employee number: ";
    s1[i].eno1();
    
    cout<<"Enter name: ";
    s1[i].ename1();
    
    cout<<"Enter address: ";
    s1[i].eaddress();
    
    cout<<"Enter phone no: ";
    s1[i].ephone();
    
    cout<<"Enter designation: ";
    s1[i].edesignation();
    
    cout<<"Enter department name: ";
    s1[i].edepartment();
    
    cout<<"Enter basic salary: ";
    s1[i].ebasic_salary();
    cout<<endl;
  } 
  
  cout<<endl;
  int highsalary=0;
  for(int i=0;i<in;i++)
  {
    
     if(highsalary<s1[i].salary())
      highsalary=s1[i].salary();
  }
   for(int i=0;i<in;i++)
  {
    
     if(highsalary==s1[i].salary())
      {
        cout<<"manager with highest salary is: "<<s1[i].salary();
        cout<<endl<<"manager name is: ";
        s1[i].getname();
      }
  }
    return 0;
}