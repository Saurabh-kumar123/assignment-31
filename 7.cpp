#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class employ
{
     public:
     int emp_no;
     char emp_name[20];
     void setdata()
     {
      cout<<"Enter employ name : ";
      cin>>emp_name;
      cout<<"Enter employ code : ";
      cin>>emp_no;
     }
};
class fulltime:public employ
{
public:
     float daily_rate,salaryf,number_of_days;
     void setfulltime()
     {
          cout<<"Enter a daily rate : ";
               cin>>daily_rate;
               cout<<"Enter number of days : ";
               cin>>number_of_days;
     }
     void cal_fulltime()
     {
          salaryf=number_of_days*daily_rate;
     }
     void showf()
     {
          cout<<"\n-------------------------------------\n";
          cout<<"\nEmploy number       : "<<emp_no;
          cout<<"\nEmploy name         : "<<emp_name;
          cout<<"\nSalary              : "<<salaryf ;
          cout<<"\nStatus              : Fulltime";
          cout<<"\n-------------------------------------\n";
     }
};
class partime:public employ
{
    public:
         float salaryp,hor_rate,number_of_hor;
         void setpartime()
         {
            cout<<"Enter a hours rate : ";
                 cin>>hor_rate;
                 cout<<"Enter hours : ";
                 cin>>number_of_hor;
         }
         void cal_partime()
         {
              salaryp=(hor_rate*number_of_hor);
         }
          void showp()
          {
                cout<<"\n-------------------------------------\n";
                cout<<"\nEmploy number       : "<<emp_no;
                cout<<"\nEmploy name         : "<<emp_name;
                cout<<"\nSalary              : "<<salaryp;
                cout<<"\nStatus              : Partime";
                cout<<"\n-------------------------------------\n";
          }
};
int main()
{
     fulltime f1[5];
     partime p1[5];
     int var=0;
     int var1=0;
     int x,i;
     do{
     cout<<"\n 1. Enter Record ";
     cout<<"\n 2. Display Record";
     cout<<"\n 3. Search Record";
     cout<<"\n 4. Quit";
     cout<<"\n\nEnter your choice : ";
     cin>>x;
     switch(x)
     {

     case 1:
          system("cls");
          int y;
          cout<<"\n 1. Fulltime Employee";
          cout<<"\n 2. Partime Employee";
          cout<<"\n\nEnter your choice : ";
          cin>>y;
          switch(y)
          {
        case 1:
             system("cls");
          f1[var].setdata();
          f1[var].setfulltime();
          f1[var].cal_fulltime();
          var++;
          break;
        case 2:
             system("cls");
          p1[var1].setdata();
          p1[var1].setpartime();
          p1[var1].cal_partime();
          var1++;
           break;
          }
          cout<<"\n Record Update Succesfuliy.....";
          getch();
          break;
     case 2:
          system("cls");
          for(int i=0;i<var;i++)
          {
               f1[i].showf();
          }
          for(int i=0;i<var1;i++)
          {
               p1[i].showp();
          }
               getch();
               break;
     case 3:
          system("cls");
          int a;
          cout<<"\n Enter Employee no : ";
          cin>>a;
            for(int i=0;i<(var>var1?var:var1);i++)
            {
               if(f1[i].emp_no==a)
               f1[i].showf();
               if(p1[i].emp_no==a)
               p1[i].showp();
            }
            getch();
            break;
     case 4:
          exit(0);
     default:
          system("cls");
          cout<<"\nPlease Entered valid input.....?";
          cout<<"\n\n Try again : ";
          getch();
     }
    system("cls");
     }while(x!=4);
     return 0;
}
