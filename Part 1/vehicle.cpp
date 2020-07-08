#include <iostream>
using namespace std;
class Vehicle
{
public:
    int d,f,f1,f2,f3;
    void dist()
    {
     cout << "\nEnter the Total Distance Travel(miles):";
     cin >> d;
    }
    void total_fuel_consumption()
    {
        f=f1+f2+f3;
        cout << "\nTotal Fuel Consumption is:"<< f <<"mpg";
    }
 };
class Bus:public Vehicle
{
public:
    int g1;
    void gallons()
    {
        cout << "\nEnter the Gallons of Bus(gallons):";
        cin >> g1;
    }
    void fuel_consumption()
   {
      f1=(d/g1);
      cout << "\nThe Fuel Consumption of Bus is:" << f1 <<"mpg";
   }
 };
class Car:public Vehicle
{
public:
    int g2;
   void gallons()
    {
        cout << "\nEnter the Gallons of Car(gallons):";
        cin >> g2;
    }
    void fuel_consumption()
   {
      f2=(d/g2);
      cout << "\nThe Fuel Consumption of Car is:" << f2 <<"mpg";
   }
 };
class Truck:public Vehicle
{
public:
    int g3;
    void gallons()
    {
        cout << "\nEnter the Gallons of Truck(gallons):";
        cin >> g3;
    }
    void fuel_consumption()
   {
      f3=(d/g3);
      cout << "\nThe Fuel Consumption of Truck is:" << f3 <<"mpg";
   }
 };
 int main()
 {
    Vehicle v;
    Bus b;
    Car c;
    Truck t;
    b.dist();
    b.gallons();
    b.fuel_consumption();
    c.dist();
    c.gallons();
    c.fuel_consumption();
    t.dist();
    t.gallons();
    t.fuel_consumption();
    v.total_fuel_consumption();
    return 0;
 }

