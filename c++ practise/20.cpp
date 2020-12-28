#include<iostream>
#include<conio.h>
using namespace std;
class outer
{
    public : class inner
    {
        public : void display()
        {

            cout<<"hello ";
        }
    };
};
int main()
{
    outer obj;
    obj::inner innerobj;
    innerobj.display();
    // outerr::inner  innerobj;
}
