#include<iostream>
using namespace std;
class Item
{
    public:
    int Item_no,price;
    char Item_name[20];
};
class DiscounItem:public Item
{
    public:
    int discount;
    int dis;
    public:
    void setItemdetails()
    {
        cout<<"Enter a item name  :  ";
        cin>>Item_name;
        cout<<"Enter a item no  :  ";
        cin>>Item_no;
        cout<<"Enter item price  :  ";
        cin>>price;
        cout<<"Enter a discount percent  :  ";
        cin>>discount;
        dis=price*discount/100;
    }
    void display()
    {
        cout<<"Item name         :  "<<Item_name<<endl<<"Item no           :  "<<Item_no<<endl<<"Item price        :  "<<price<<endl<<"discout rupees    :  "<<dis<<endl;
    }
};
int main()
{
     DiscounItem p[10];
     int i,n,sum=0,sumdis=0;
     cout<<"How many Item enter :  ";
     cin>>n;
     cout<<"-----------------------------"<<endl;
     for(i=1;i<=n;i++)
     {
        p[i].setItemdetails();
        cout<<"---------------------------------"<<endl;
        sum=sum+p[i].price;
     }
      for(i=1;i<=n;i++)
     {
        p[i].display();
        cout<<"---------------------------------"<<endl;
        sumdis=sumdis+p[i].dis;
     }
       cout<<"Total  amount is    :  "<<sum<<endl;
       cout<<"Total  discount is  :  "<<sumdis<<endl;
       cout<<"----------------------------------"<<endl;
       cout<<"Net Payble Amout    :  "<<sum-sumdis<<endl;
       cout<<"----------------------------------";
    return 0;
}

