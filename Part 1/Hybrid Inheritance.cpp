#include<iostream>
using namespace std;
class A
{
public:
      int x;
      void getx()
      {
         cout << "Enter the value of x:";
         cin >> x;
      }
};
class B:public A
{
public:
    int y;
    void gety()
    {
         cout << "Enter the value of y:";
         cin >> y;
    }
};
class C
{
public:
      int z;
      void getz()
    {
         cout << "Enter the value of z:";
         cin >> z;
    }
};
class D:public B, public C
{
public:
    void sum()
    {
        cout << "Sum= " << x+y+z <<"\n";
    }
    void product()
    {
        cout << "Product= " << x*y*z;
    }
};
int main()
{
    D obj1;
    obj1.getx();
    obj1.gety();
    obj1.getz();
    obj1.sum();
    obj1.product();
    return 0;
}

