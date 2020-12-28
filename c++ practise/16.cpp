#include<iostream>
#include<conio.h>
using namespace std;

class A
{
    int a;
};
class B1 : public A
{
    public : int b1;
};
class B2 : public A
{
    public : int b2;
};
class C : public B1, public B2
{
    public : int c;
};
int main()
{
    C obj;
    obj.a=5;
    cout<<"\n\t a value = "<<obj.a;
}
