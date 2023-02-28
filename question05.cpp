#include<iostream>
using namespace std;
class item
{
    int item_no;
    char name[20];
    protected:
    float price;
    public:
    void setname()
    {
        cin.ignore();
      cin>>name;
    }
    void setitemnum()
    {
     cin>>item_no;
    }
    void setprize()
    {
      cin>>price;
    }
      void getname()
    {
     cout<<name;
    }
    void getitemnum()
    {
     cout<<item_no;
    }
    void getprize()
    {
      cout<<price;
    }
};
class DiscountedItem:public item
{
int Discountpercent;
friend float totalprice(DiscountedItem);
friend float totalDiscount(DiscountedItem);

public:
void setdiscount(int x)
{
 Discountpercent=x;
}
void getdiscount()
{
    cout<<Discountpercent;
}
void applydiscount()
{
    float x;
   x=(price-(Discountpercent*price*1.0)/100);
   cout<<x;
}
void discountedprice()
{
    cout<<price;
}
};
float totalprice(DiscountedItem c1)
{
    return c1.price;
}
float totalDiscount(DiscountedItem c1)
{
float x=c1.Discountpercent*c1.price*1.0/100;

return x;

}
int main()
{

int item;
int discount;
cout<<"how many items you want to enter?: ";
cin>>item;
DiscountedItem s1[item];

for(int i=0;i<item;i++)
{
cout<<"enter item name: ";
s1[i].setname();
cout<<"Enter item no. : ";
s1[i].setitemnum();
cout<<"Enter Item Price: ";
s1[i].setprize();
cout<<"Enter Discount percent: ";
cin>>discount;
s1[i].setdiscount(discount);
cout<<"-------------------------"<<endl;
} 
for(int i=0;i<item;i++)
{
cout<<"Item name is: ";
s1[i].getname();
cout<<endl;
cout<<"Item  no is: ";
s1[i].getitemnum();
cout<<endl;
cout<<"Item price is: ";
s1[i].getprize();
cout<<endl;
cout<<"Discount percent: ";
s1[i].getdiscount();
cout<<endl;
cout<<"Discounted price: ";
s1[i].applydiscount();
cout<<endl; 
cout<<"-------------------"<<endl;
} 
int total_price=0,discountedprice=0;
for(int i=0;i<item;i++)
{
    total_price=total_price+totalprice(s1[i]);
    discountedprice=discountedprice+totalDiscount(s1[i]);
}
cout<<"total price is :"<<total_price<<endl;
cout<<"total discount is: "<<discountedprice;
    return 0;
}