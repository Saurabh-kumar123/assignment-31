#include<iostream>
using namespace std;
class Student
{
     public:
     int id;
     char name[20];
};
class Exam_Student:public Student
{
public:
     int m1,m2,m3,m4,m5,m6;
};
class Result_Student:public Exam_Student
{
public:
     float percent;
     void getdata()
     {
          cout<<"Enter a Student name  :  ";
          cin>>name;
          cout<<"Enter a Student ID  :  ";
          cin>>id;
          cout<<"Enter a 1 sub marks  :  ";
          cin>>m1;
          cout<<"Enter a 2 sub marks  :  ";
          cin>>m2;
          cout<<"Enter a 3 sub marks  :  ";
          cin>>m3;
          cout<<"Enter a 4 sub marks  :  ";
          cin>>m4;
          cout<<"Enter a 5 sub marks  :  ";
          cin>>m5;
          cout<<"Enter a 6 sub marks  :  ";
          cin>>m6;
          cout<<"---------------------------------";

     }
     void display()
     {
           percent = (m1+m2+m3+m4+m5+m6)/6.0;
          cout<<"\n***** STUDENT MARKSHEET ******";
          cout<<"\n--------------------------------";
          cout<<"\nStudent Name   :  "<<name;
          cout<<"\nStudent ID     :  "<<id;
          cout<<"\nSub 1 marks    :  "<<m1;
          cout<<"\nSub 1 marks    :  "<<m2;
          cout<<"\nSub 1 marks    :  "<<m3;
          cout<<"\nSub 1 marks    :  "<<m4;
          cout<<"\nSub 1 marks    :  "<<m5;
          cout<<"\nSub 1 marks    :  "<<m6;
          cout<<"\n\nTotal percent  :  "<<percent;
          cout<<"\n------------------------------";
     }
};
int main()
{
     int n;
     Result_Student s[10];
     cout<<"How many want to student details : ";
     cin>>n;
     cout<<"-------------------------------------"<<endl;
     for(int i=0;i<n;i++)
          s[i].getdata();
     for(int i=0;i<n;i++)
          s[i].display();
     return 0;
}
