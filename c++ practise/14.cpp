#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    public :  class A1
    {
       public : int x;
        A1()
        {
            x=10;
        }
    };
    A1 obj;
};
int main()
{
    A o;
   cout<<o.obj.x;
}
