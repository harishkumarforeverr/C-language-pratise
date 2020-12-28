#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    int a;
    A(int x)
    {
        a=x;
    }
    void show()
    {
        cout<<"a value = "<<a;
    }
    friend void f1();
};
void f1()
{
    A obj(5);
    obj.show();
}
int main()
{
    f1();
}
