#include<iostream>
#include<stdio.h>
using namespace std;
class customer
{
     char name[20];
     long long pho;
public:
     void accept()
     {
          cout<<"Enter customer name : ";
          cin>>name;
          cout<<"\nEnter customer phone number : ";
          cin>>pho;
     }
          void display()
          {
               cout<<"\nCustomer Name              :  "<<name;
               cout<<"\nCustomer Phone no          : "<<pho;
          }
};
class Depositer:public customer
{
     int account_no;
     float balance_d;
     public:
     void accept_d()
     {
          cout<<"\nEnter depositer account no : ";
          cin>>account_no;
          cout<<"\nEnter depositer balance : ";
          cin>>balance_d;
     }
     void display_d()
     {
          cout<<"\nDepositer account no       : "<<account_no;
          cout<<"\nDepositer account balance  : "<<balance_d;
     }
};
class Borrower:public Depositer
{
     int loan_no;
     float loan_amt;
     public:
     void accept_b()
     {
          cout<<"\nEnter customer loan no : ";
          cin>>loan_no;
          cout<<"\nEnter customer loan amt : ";
          cin>>loan_amt;
     }
     void display_b()
     {
          cout<<"\nBorrower loan no           : "<<loan_no;
          cout<<"\nBorrower loan amount       : "<<loan_amt;
     }
};
int main()
{
     Borrower *b;
     int n;
     cout<<"Enter no of customer detail you want : ";
     cin>>n;
     cout<<"------------------------------------"<<endl;
     b=new Borrower[n];
     for(int i=0;i<n;i++)
     {
          b[i].accept();
          b[i].accept_d();
          b[i].accept_b();
          cout<<"------------------------------------"<<endl;
     }
     for(int i=0;i<n;i++)
     {
          cout<<"  Customer Details  "<<endl;
          cout<<"------------------------------------"<<endl;
          b[i].display();
          b[i].display_d();
          cout<<"\n------------------------------------"<<endl;
          b[i].display_b();
          cout<<"\n------------------------------------"<<endl;
     }

   return 0;
}
