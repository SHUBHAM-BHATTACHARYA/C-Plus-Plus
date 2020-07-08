#include<iostream>
using namespace std;
class stage
{
private:
    float s,l,b,A;
public:
    void input1();
    void input2();
    void area1();
    void area2();
    void show1();
    void show2();
};
void stage::input1()
{
    cout << "Enter Side of Square:";
    cin >> s;
}
void stage::input2()
{
    cout << "Enter Length:";
    cin >> l;
    cout << "Enter Breadth:";
    cin >> b;
}
void stage::area1()
{
    A=s*s;
}
void stage::area2()
{
    A=l*b;
}
void stage::show1()
{
    cout << "Area of Square=" << A << "\n\n";
}
void stage::show2()
{
    cout << "Area of Rectangle=" << A;
}
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

