#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;

};
class B
{
    int b;
    A obj;
};
int main()
{
 cout<<sizeof(A);
 cout<<sizeof(B);
 getch();
 return 0;
}
