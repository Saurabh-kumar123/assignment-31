#include<iostream>
using namespace std;
class B;
class A
{
     int a;
public:
     A(int a):a(a){}
     void display()
     {
     cout<<"class A number : "<<a<<endl;}
     friend void swap(A *a,B *b);
};
class B
{
     int b;
public:
     B(int a):b(a){}
     void display()
     {
     cout<<"class B number : "<<b<<endl;}
     friend void swap(A *a,B *b);
};
   void swap(A *n1,B *n2)
   {
        int no;
        no=n1->a;
        n1->a=n2->b;
        n2->b=no;
   }
int main()
{
     A a(135);
     B b(500);
     swap(&a,&b);
     a.display();
     b.display();
     return 0;
}
