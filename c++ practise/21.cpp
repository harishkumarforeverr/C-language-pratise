
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private : int a;
     A (int x)
    {a=x;}
       public :void show()
    {
        cout<<"\n\t a value = "<<a;
    }
};
int main()
{
    A o(90);
    o.show();
}
