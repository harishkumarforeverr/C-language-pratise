#include<iostream>
#include<conio.h>
using namespace std;

class A1
{
    public : void f1()
    {
        cout<<"\n\t a1 f1() ";
    }
};
class A2
{
    public : void f1()
    {
        cout<<"\n\t A2 f1() ";
    }
};
class B : public A1,public A2
{
    public :
};
int main()
{
    B o;
    o.A1::f1();
    o.A2::f1();
}
