#include<iostream>
#include<conio.h>
using namespace std;
 class Dummy
 {
     static int a;
     public : void seta(int x)
                {
                    a=x;
                }
                static void show_a()
                {
                    cout<<"a value = "<<a;
                }
 };
 int Dummy::a;
 int main()
 {
     Dummy d1;
     d1.seta(90);
     d1.show_a();
 }
