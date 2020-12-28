#include<iostream>
#include<conio.h>
using namespace std;
class A
{
    private : int a[10];
    public :
    void set(int i, int val)
    {
        a[i]=val;
    }
    int operator [] (int i)
    {
        return a[i];
    }
};
int main()
{
    A o;
    for(int i=0;i<10;i++)
        o.set(i,10*(i+1));
        cout<<"\n\t values = ";
    for(int i=0;i<10;i++)
        cout<<" "<<o.operator [] (i);
        getch();
        return 0;

}
