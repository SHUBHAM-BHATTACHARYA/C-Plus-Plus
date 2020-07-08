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
        t1.num=num-t.num;
        return(t1);
    }
    Test operator +(Test t)
    {
        Test t1;
        t1.num=num+t.num;
        return(t1);
    }
    void print()
    {
        cout << "The Result is:" << num <<"\n";
    }
};
int main()
{
    int ch;
    Test t,t1,t2;
    cout <<"1.Unary Plus\n"<<"2.Unary Minus\n"<<"3.Binary Plus\n"<<"4.Binary Minus\n"<<"5.Exit\n";
    do
    {
        cout << "Enter Your Choice:";
        cin >>ch;
    switch(ch)
    {
    case 1:
        {
            ++t;
            t.print();
            break;
        }
    case 2:
        {
            --t;
            t.print();
            break;
        }
    case 3:
        {
            t=t1+t2;
            t.print();
            break;
        }
    case 4:
        {
            t=t1-t2;
            t.print();
            break;
        }
    case 5:
        {
            cout <<"EXIT";
            break;
        }
    default:
        {
            cout << "Enter a valid Choice!";
            break;
        }
    }
    }while(ch!=5);
    return 0;
}

