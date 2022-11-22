#include<iostream>
using namespace std;
class Data
{
    protected:
    int num1,num2;
    public:
    void setdata()
    {
        cout<<"enter first number  :  ";
        cin>>num1;
        cout<<endl<<"enter second number  :  ";
        cin>>num2;
    }
};
    class Addition:public Data
    {
       int sum;
       public:
       void add()
       {
        sum=num1+num2;
       }
       void display()
       {
        cout<<"\nThe sum is  :  "<<sum<<endl;
       }
    };
    int main()
    {
        Addition a;
        a.setdata();
        a.add();
        a.display();
        return 0;
    }
