#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public : void f1()
    {
        cout<<"\n\t A::f1() ";
    }
};
class B : public A
{
    public : void f1()
    {
        cout<<"\n\t B::f1() ";
    }
};
int main()
{
    A *p=new B;
    p->f1();
}
