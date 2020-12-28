
#include<iostream>
#include<conio.h>
using namespace std;
int f1(int);
void f1(float);
int main()
{
 char x='a';
f1(x);
getch();
}
int f1(int x)
{
 cout<<"int f1() ";
return (x);
}
void f1(float b)
{
cout<<" void f1() "<<b;
}
