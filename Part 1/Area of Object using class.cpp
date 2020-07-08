#include<iostream>
using namespace std;
class stage
{
private:
    float s,l,b,A;
public:
    void input1()
    {
        cout << "Enter Side of Square:";
        cin >> s;
    }
    void input2()
    {

        cout << "Enter Length:";
        cin >> l;
        cout << "Enter Breadth:";
        cin >> b;
    }
    void area1()
    {
        A=s*s;
    }
    void area2()
    {
        A=l*b;
    }
    void show1()
    {

        cout << "Area of Square=" << A << "\n\n";
    }
    void show2()
    {

        cout << "Area of Rectangle=" << A;
    }
};
int main()
{
    stage t;
    t.input1();
    t.area1();
    t.show1();
    t.input2();
    t.area2();
    t.show2();
    return 0;
}
