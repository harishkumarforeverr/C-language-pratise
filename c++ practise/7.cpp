#include<iostream>
#include<conio.h>
using namespace std;
int f1(int);
void f1(int);
int main()
{
 int y=f1(4);
getch();
}
int f1(int x)
{
 cout<<"int f1() ";
return (x);
}
void f1(int)
{
cout<<" void f1() ";
}
