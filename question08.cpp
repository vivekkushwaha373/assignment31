#include<iostream>
using namespace std;
class Customer
{
protected:
char name[20];
char phone_no[10];
};
class Depositor:public Customer
{
protected:
int accno;
int balance;
};
class Borrower:public Depositor
{
int loan_no;
int loan_amt;
public:
void getinput()
{
cin.ignore();
cout<<"Enter customer name: ";
cin.getline(name,20);
cout<<"Enter customer phone no: ";
cin>>phone_no;
cout<<"Enter customer A/C No: ";
cin>>accno;
cout<<"Enter balance: ";
cin>>balance;
cout<<"Enter loan no: ";
cin>>loan_no;
cout<<"Enter Loan amount: ";
cin>>loan_amt;


cout<<endl;
}
void displayinput()
{
cout<<"Details of Customer"<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"Customer Name         : "<<name<<endl;
cout<<"Customer phone numner : "<<phone_no<<endl;
cout<<"Customer A/c No       : "<<accno<<endl;
cout<<"Balance               : "<<balance<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<"Loan number:          : "<<loan_no<<endl;
cout<<"Loan Account          : "<<loan_amt<<endl;
cout<<"---------------------------------------------"<<endl;
cout<<endl;

}
};
int main()
{
int in;
cout<<"Enter the number of customers details you want: ";
cin>>in;
Borrower s1[in];
for(int i=0;i<in;i++)
{
    s1[i].getinput();
}
for(int i=0;i<in;i++)
{
    s1[i].displayinput();
}


    return 0;
}