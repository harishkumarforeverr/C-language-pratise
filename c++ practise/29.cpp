#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public: int a;
    friend void f1();
};
class B : public A
{
    public : int b;
};
void f1(A o1)
{
    cout<<" a value = "<<o1.a;
   // cout<<" a value = "<<o1.b;
}
int main()
{
    B obj;
    obj.a=5;
    obj.b=6;
    f1(obj);
}
