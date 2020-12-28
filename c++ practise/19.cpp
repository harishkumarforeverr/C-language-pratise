#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private : int a,b;
    public : A()
    {
        a=0;b=0;
    }
    virtual void f1()=0;
    void showdata()
    {
        cout<<"\n\t ab values = "<<a<<ends<<b;
    }
};
class B : public A
{
    public : void f1()
    {
        cout<<"\n\t function is overloaded ";
    }
};
int main()
{
    A *p=new B;
    p->showdata();
    p->f1();
}
