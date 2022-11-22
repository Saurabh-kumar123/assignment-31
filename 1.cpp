#include<iostream>
#include<string.h>
#include<string>
using namespace std;
class person
{
   protected: int age;
   char name[20];
   public:
   void setname(char n[20])
   {
       strcpy(name,n);
   }
   void setage(int age)
   {
    this->age=age;
   }
   int getage(){return age;}
};
class Employ:public person
{
     int empid;
     float empsalary;
public:
     void setid(int id)
     {
          empid=id;
     }
     void setsalary(float s){empsalary=s;}
     int getid(){return empid;}
     float getsalary(){return empsalary;}
     void display()
   {cout<<"Name   :  "<<name<<endl<<"Age    :  "<<age<<endl<<"Id     :  "<<empid<<endl<<"Salary :  "<<empsalary<<endl;}

};
int main()
{
   Employ p;
   p.setname("Saurabh");
   p.setage(20);
   p.setid(123);
   p.setsalary(1200.34);
   p.display();
   return 0;
}
