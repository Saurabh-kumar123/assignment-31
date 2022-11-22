#include<iostream>
using namespace std;
class Person
{
    protected:
    char name[20],address[100];
    long long Phone_no;
};
class Employ:public Person
{
    protected:
    int eno;
    char ename[20];
};
class Manager:public Employ
{
     public:
    char designation[20],dipartment_name[20];
    long long basic_salary;
    public:
    void setdetails()
    {
        cout<<"Enter a Id : ";
        cin>>eno;
        cout<<"Enter a Name : ";
        cin>>name;
        cout<<"Enter a Phone_no : ";
        cin>>Phone_no;
        cout<<"Enter designation : ";
        cin>>designation;
        cout<<"Enter dipartment name : ";
        cin>>dipartment_name;
        cout<<"Enter a salary : ";
        cin>>basic_salary;
    }
    void display()
    {
        cout<<"Name    :       "<<name<<endl<<"ID    :      "<<eno<<endl<<"Phone no   :  "<<Phone_no<<endl<<"designation  :  "<<designation<<endl<<"department  :  "<<dipartment_name<<endl<<"salary     :    "<<basic_salary<<endl;
    }
};
int main()
{
    Manager m[50];
    int n,i,temp=1;
    cout<<"Enter how many details employ : ";
    cin>>n;
    cout<<"--------------------------------------"<<endl;
    for(i=1;i<=n;i++)
    {
        m[i].setdetails();
        cout<<"--------------------------------------"<<endl;
    }
    for(i=2;i<=n;i++)
    {
        if(m[temp].basic_salary<m[i].basic_salary)
          temp=i;
    }
    cout<<"\nThe higest salary of  :  "<<m[temp].basic_salary<<endl;
    cout<<"--------------------------------------"<<endl;
    return 0;
}
