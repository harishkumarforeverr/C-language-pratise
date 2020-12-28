#include<iostream>
using namespace std;
#include<conio.h>
class A
{
    private : int hr,min,sec;
    public : A(int x, int y, int z)
    {
     hr=x;
     min=y;
     sec=z;
    }
    int operator > (A &o)
    {
        if(hr>o.hr)
            return 1;
        else if(o.hr>hr)
            return 0;
        else if(min>o.min)
            return 1;
        else if (o.min>min)
            return 0;
        else if(sec>o.sec)
            return 1;
        else
            return 0;
    }
    void show()
    {
        cout<<"\n\t time = "<<hr<<ends<<min<<ends<<sec;
    }
};
int main()
{
     A o(12,30,15);
     A p(3,15,10);
     if(o.operator > (p))
      o.show();
      else
      p.show();
      getch();
      return 0;
}
