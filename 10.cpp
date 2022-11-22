#include<iostream>
using namespace std;
class Worker
{
     protected:
     int id,salary;
     char name[20];
};
class Officer
{
     protected:
     int HRA,DA;
};
class Manager:public Worker,Officer
{
     float GROSS,TA;
public:
     void getdata()
     {
          cout<<"Enter ID : ";
          cin>>id;
          cout<<"Enter Name : ";
          cin>>name;
          cout<<"Enter salary : ";
          cin>>salary;
          cout<<"Enter DA : ";
          cin>>DA;
          cout<<"Enter HRA : ";
          cin>>HRA;
          TA=salary*0.10;
          GROSS=TA+HRA+DA+salary;
     }
     void display()
     {
          cout<<"----------------------------"<<endl;
          cout<<" Manager Information"<<endl;
          cout<<"----------------------------"<<endl;
          cout<<" ID code           :  "<<id<<endl;
          cout<<" Name              :  "<<name<<endl;
          cout<<" Salary            :  "<<salary<<endl;
          cout<<" DA                :  "<<DA<<endl;
          cout<<" HRA               :  "<<HRA<<endl;
          cout<<" TA                :  "<<TA<<endl;
          cout<<" Gross Salary      :  "<<GROSS<<endl;
          cout<<"----------------------------"<<endl;
     }
};
int main()
{
     Manager m[10];
     int n;
     cout<<"Enter Manager count : ";
     cin>>n;
     cout<<"Enter Worker Information for : "<<n<<endl;
     cout<<"---------------------------------"<<endl;
     for(int i=0;i<n;i++)
          m[i].getdata();
     for(int i=0;i<n;i++)
          m[i].display();
     return 0;
}
