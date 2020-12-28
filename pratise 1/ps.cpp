#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=20,y=30,z=15;
    if(x>y&&x>z)
        cout<<"\n\t x value = "<<x;
    if(y>x&&y>z)
        cout<<"\n\t y value = "<<y;
    if(z>x&&x>y)
        cout<<"\n\t z value = "<<z;

}
