#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private : int *p;
    public : A()
    {
    p=new int;
    *p=10;
    }
     virtual ~A()
    {
              delete p;
        cout<<"\n\t destroy location by p";
    }
};
class B : public A
{
    private : int *q;
    public : B()
    {
    q=new int;
    *q=10;
    }
    ~B()
    {
        delete q;
        cout<<"\n\t destroy location by q";
    }
};
void fun()
{
    A *ptr=new B;
    delete ptr;
}
int main()
{
    fun();
}
