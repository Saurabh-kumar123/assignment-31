#include<iostream>
using namespace std;
class Student
{
    protected:
    int m1,m2,m3;
    public:void setmarks()
    {
        cout<<"Enter a marks first subject : ";
        cin>>m1;
        cout<<"Enter a marks second subject : ";
        cin>>m2;
        cout<<"Enter a marks third subject : ";
        cin>>m3;
    }
};
class Total:public Student
{
    protected:
    int sum;
    public:
    void Totalmarks()
    {
        sum=m1+m2+m3;
    } 
};
class Percent:public Total
{
   float avg;
   public: void totalpercent()
   {
     avg=sum/3.0;
   }
   void display()
   {
     cout<<"The total percent of each subject : "<<avg<<endl;
   }
};
int main()
{
    Percent p;
    p.setmarks();
    p.Totalmarks();
    p.totalpercent();
    p.display();
    return 0;
}
