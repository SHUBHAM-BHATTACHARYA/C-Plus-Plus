#include<iostream>
using namespace std;
class interest
{
private :
    int principle,time,si,y;
public:
    interest(int x,int y)
    {
        principle=x;
        time=y;
    }
    void input()
    {
        cout << "Enter the Principle Amount:";
        cin >> principle;
        cout << "Enter the Time Periods:";
        cin >> time;
    }
    void show()
    {
        if(time < 5)
        {
            si=(principle*time*7)/100;
            cout <<"Simple Interest= " <<si;
        }
        else if(time<10)
        {
            si=(principle*time*8)/100;
            cout <<"Simple Interest= " <<si;
        }
        else if(time>=10)
        {
            si=(principle*time*10)/100;
            cout <<"Simple Interest= " <<si;
        }
    }
};
int main()
{
    interest s(0,0);
    s.input();
    s.show();
    return 0;
}

