#include<iostream>
#include<conio.h>
using namespace std;

class B
{
    int b;
};
class A
{
    int a;
    B obj;
};
int main()
{
    cout<<sizeof(A);
    cout<<sizeof(B);
}
