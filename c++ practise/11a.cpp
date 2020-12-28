#include<iostream>
#include<conio.h>
using namespace std;
 class Dummy{
  int a;
  public : void set_a(int x)
  {
      a=x;
  }
  static void show_a()
  {
      cout<<"\n\t a value = "<<a;
  }
 };
 int main()
 {

     Dummy d1;
     d1.set_a();
     d1.show_a();
 }
