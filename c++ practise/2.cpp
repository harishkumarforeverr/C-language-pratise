#include<iostream>
#include<conio.h>
using namespace std;
class A1
{
  public : void f1()
            {
		cout<<" A1 f1()";
	    }
};
class A2
{
  public : void f1()
            {
		cout<<"A2 f1()";
	    }
};
class B : public A1,public A2
{
  public : void f1()
            {
		cout<<"B f1()";
	    }
};
int main()
{
B obj;
obj.f1();
}
