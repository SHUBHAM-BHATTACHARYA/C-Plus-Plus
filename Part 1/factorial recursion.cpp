#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int i,n;
    cout << "Enter the Number:";
    cin >> n;
    i=fact(n);
    cout << "Factorial of " << n << " is: " << fact(n);
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
