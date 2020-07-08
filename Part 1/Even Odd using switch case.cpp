#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout << "Enter the number:";
    cin >> ch;
    switch(ch%2)
    {
        case 0:cout << ch << " is Even";
        break;
        case 1:cout << ch << " is Odd";
        return 0;
    }
}

