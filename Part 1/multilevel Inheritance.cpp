#include<iostream>
using namespace std;
class base
{
public:
      int x;
      void getdata()
      {
         cout << "Enter the value of x:";
         cin >> x;
      }
};
class derive1:public base
{
public:
      int y;
      void readdata()
      {
         cout << "\nEnter the value of y:";
         cin >> y;
      }
};
class derive2:public derive1
{
private:
      int z;
public:
      void indata()
      {
         cout << "\nEnter the value of z:";
         cin >> z;
      }
      void product()
      {
         cout << "\nProduct = " << x * y * z;
      }
};
int main()
{
    derive2 a;
    a.getdata();
    a.readdata();
    a.indata();
    a.product();
    return 0;
}

