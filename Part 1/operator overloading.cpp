#include<iostream>
using namespace std;
class Test{
private:
    int num;
public:
    Test()
    {
        num=8;
    }
    void operator ++()
    {
        num=num+2;
    }
    void operator --()
    {
        num=num-2;
    }
    Test operator -(Test t)
    {
        Test t1;
        t1.num=num+t.num;
        return(t1);
    }
    Test operator +(Test t)
    {
        Test t1;
        t1.num=num-t.num;
        return(t1);
    }
    void print()
    {
        cout << "The Result is:" << num <<"\n";
    }
};
int main()
{
    Test t,t1,t2;
    ++t;
    t.print();
    --t;
    t.print();
    t=t1-t2;
    t.print();
    t=t1+t2;
    t.print();
    return 0;
}
