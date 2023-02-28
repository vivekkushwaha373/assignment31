#include<iostream>
#include<cstring>
using namespace std;
class Student
{
protected:
int id;
char name[20];
public:
void getid()
{
cout<<"Enter Roll no. : ";
cin>>id;
cout<<endl;
}
void getname()
{
cin.ignore();
cout<<"Enter Student Name :   ";
cin.getline(name,20);
cout<<endl;

}
};
class StudentExam : public Student
{
protected:
int s[6];
protected:
void getmarks()
{

    for(int i=0;i<6;i++)
    {
         
         cout<<"Enter the marks for Subject "<<i+1<<" : ";        
         cin>>s[i];
         cout<<endl;
    }
}
void studentmarklist()
{
    cout<<"----------------------------------------------"<<endl;
    cout<<"***************student Marklist***************"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"Roll No.             : "<<id<<endl;
    cout<<"Student Name         : "<<name<<endl;
    cout<<"Marks of Subject 1   : "<<s[0]<<endl;
    cout<<"Marks of Subject 2   : "<<s[1]<<endl;
    cout<<"Marks of Subject 3   : "<<s[2]<<endl;
    cout<<"Marks of Subject 4   : "<<s[3]<<endl;
    cout<<"Marks of Subject 5   : "<<s[4]<<endl;
    cout<<"Marks of Subject 6   : "<<s[6]<<endl;
    cout<<endl;
    
}
};
class StudentResult: public StudentExam
{

public:
    void call()
    {
        getid();
        getname();
        getmarks();
    }
    void percentage()
    {
       cout<<"Total Percentage     : "<<((s[0]+s[1]+s[2]+s[4]+s[5]+s[3])*100)/600.0<<endl;
       cout<<"-----------------------------------------------"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of students you want? :";
    cin>>n;
    StudentResult s[n];
    for(int i=0;i<n;i++)
    {
        s[i].call();
        s[i].percentage();
    }

    return 0;
}