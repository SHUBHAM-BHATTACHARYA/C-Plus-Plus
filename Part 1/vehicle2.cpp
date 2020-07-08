#include <iostream>
using namespace std;
class Vehicle
{
private:
    int d,m;
public:
    void getDistance()
    {
     cout << "Enter the Total Distance Travel:";
     cin >> d;
     cout << "Enter the Mileage:";
     cin >> m;
    }
    int return_Distance()
    {
        return d;
    }
    int return_Mileage()
    {
        return m;
    }
 };
class Bus:public Vehicle
{
public:
    float Bus_fuel()
   {
      float d,m;
      float fuel_consumption_bus;
      d=return_Distance();
      m=return_Mileage();
      fuel_consumption_bus=d/m;
      return fuel_consumption_bus;
   }
 };
class Car:public Vehicle
{
public:
    float Car_fuel()
   {
      float d,m;
      float fuel_consumption_car;
      d=return_Distance();
      m=return_Mileage();
      fuel_consumption_car=d/m;
      return fuel_consumption_car;
   }
 };
class Truck:public Vehicle
{
public:
    float Truck_fuel()
   {
      float d,m;
      float fuel_consumption_truck;
      d=return_Distance();
      m=return_Mileage();
      fuel_consumption_truck=d/m;
      return fuel_consumption_truck;
   }
 };
int main()
 {
    Bus b;
    Car c;
    Truck t;
    float fuel_consumption_bus,fuel_consumption_car,fuel_consumption_truck,total_fuel_consumption;
    b.getDistance();
    fuel_consumption_bus=b.Bus_fuel();
    cout << "Fuel Consumption of Bus of Distance " << b.return_Distance() << " km is " << fuel_consumption_bus<<endl;
    c.getDistance();
    fuel_consumption_car=c.Car_fuel();
    cout << "Fuel Consumption of Car of Distance " << c.return_Distance() << " km is " << fuel_consumption_car<<endl;
    t.getDistance();
    fuel_consumption_truck=t.Truck_fuel();
    cout << "Fuel Consumption of Truck of Distance " << t.return_Distance() << " km is " << fuel_consumption_truck<<endl;
    total_fuel_consumption=fuel_consumption_bus+fuel_consumption_car+fuel_consumption_truck;
    cout << "Total Fuel Consumption of Distance " << t.return_Distance() << " km is " << total_fuel_consumption<<endl;
    return 0;
 }


