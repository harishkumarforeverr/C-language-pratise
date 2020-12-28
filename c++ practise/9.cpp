#include<iostream>
#include<conio.h>
using namespace std;
int f1(int);
void f1(float);
int main()
{
f1(4);
f1(3.14f);
getch();
}
int f1(int x)
{
 cout<<"int f1() "<<x;
return (x);
}
void f1(float b)
{
cout<<" void f1() "<<b;
}
