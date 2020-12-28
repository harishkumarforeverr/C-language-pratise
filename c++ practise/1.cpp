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
public :
};
int main()
{
B obj;
obj.A1::f1();
}
