#include<iostream>
using namespace std;
class A
{
public:
      int x,y;
      void getdata()
      {
         cout << "Enter the value of x:";
         cin >> x;
         cout << "Enter the value of y:";
         cin >> y;
      }
};
class B:public A
{
public:
      void product()
      {
         cout << "\nProduct = " << x * y <<"\n";
      }
};
class C:public A
{
public:
      void sum()
      {
         cout << "\nSum=" << x+y;
      }
};
int main()
{
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}


