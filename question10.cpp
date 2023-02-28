#include<iostream>
using namespace std;
class worker
{
protected:
int code;
char name[20];
float salary;

};
class officer
{
protected:
float DA,HRA;

};
class manager:public worker,public officer
{
int TA;
public:
manager():worker(),officer()
{

}
void getdata()
{
    cout<<"Enter Code: ";
    cin>>code;
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Salary: ";
    cin>>salary;
    cout<<"Enter DA: ";
    cin>>DA;
    cout<<"Enter HRA: ";
    cin>>HRA;
    TA=salary/10;
    cout<<endl;
}
void displaydata()
{
    cout<<"---------------------------------"<<endl;
    cout<<"Manager Information"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"code                : "<<code<<endl;
    cout<<"Name                : "<<name<<endl;
    cout<<"Salary              : "<<salary<<endl;
    cout<<"DA                  : "<<DA<<endl;
    cout<<"HRA                 : "<<HRA<<endl;
    cout<<"TA                  : "<<TA<<endl;
    cout<<"Gross Salary        : "<<salary+DA+HRA+TA<<endl;
}
};
int main()
{
int in;
cout<<"Enter Manager count: ";
cin>>in;
manager s1[in];
for(int i=0;i<in;i++)
{
s1[i].getdata();
s1[i].displaydata();
}



    return 0;
}