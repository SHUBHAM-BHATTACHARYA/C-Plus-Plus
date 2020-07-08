#include<iostream>
using namespace std;
class Complex
{
private:
    float real,imag;
public:
    Complex()
    {
        real=imag=0;
    }
    Complex add(Complex obj1,Complex obj2)
    {
        real=obj1.real+obj2.real;
        imag=obj1.imag+obj2.imag;
    }
    Complex sub(Complex obj1,Complex obj2)
    {
        real=obj1.real-obj2.real;
        imag=obj1.imag-obj2.imag;
    }
};
int main()
{
    Complex obj1,obj2,result;
    cout << "Enter the real part of 1st Complex No:";
    cin >> obj1.real;
    cout << "Enter the imag part of 1st Complex No:";
    cin >> obj1.imag;
    cout << "Enter the real part of 2nd Complex No:";
    cin >> obj2.real;
    cout << "Enter the imag part of 2nd Complex No:";
    cin >> obj2.imag;
    cout<<"Addition is:"<<result.add(obj1,obj2);
    cout<<"Subtractions is:"<<result.sub(obj1,obj2);
}
