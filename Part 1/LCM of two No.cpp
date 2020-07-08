#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;
    x=a;
    y=b;
    while(x!=y)
    {
        if(x<y)
        x=a+x;
        else
            y=b+y;
    }
    cout << "L.C.M of " << a << " and " << b << " is:" << x;
}
