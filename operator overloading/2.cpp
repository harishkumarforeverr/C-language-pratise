#include<iostream>
using namespace std;
#include<conio.h>
class A
{
    private : int arr[3][3];
    public : int & operator () (int x, int y)
             {
              return (arr[x][y]);
             }
             void show()
             {
                 int i,j;
                 for(i=0;i<3;i++)
                    for(j=0;j<3;j++)
                    cout<<" "<<arr[i][j];
            }
};
int main()
{
    A o;
    o(0,0)=9;
    o(0,1)=0;
    o(0,2)=6;
    o(1,0)=3;
    o(1,1)=4;
    o(1,2)=8;
    o(2,0)=8;
    o(2,1)=4;
    o(2,2)=4;
    o.show();
}
