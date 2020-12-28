#include<iostream>
#include<conio.h>
using namespace std;
class Dummy
{
public : int a;
static int k;
};
int Dummy::k;
int main()
{
Dummy d1,d2;
d1.a=20;
d1.k=20;
cout<<d1.a<<" ";
cout<<d1.k;
getch();
return 0;
}
