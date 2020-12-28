#include<iostream>
#include<conio.h>
using namespace std;
class A
{
 public : void f1()
{
 cout<<" A::f1() ";
}
};
class B: public A
{
 public : void f1(int x)
{
 cout<<"B::f1()";
}
};
int main(){
B o;
o.f1();
}
