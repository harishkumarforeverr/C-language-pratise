
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
      cout<<"\n\t a and b value "<<a<<ends<<b;
    }
};
int main()
{
    A o;
    o.showdata();
}
