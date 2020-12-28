#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public : int a;
};
class B : public A
{
    public : int b;
};
int main()
{
    B obj;
    obj.a=5;
    obj.b=6;
    A o;
    o=obj;
    cout<<"\n\t a values= "<<o.a;
}
