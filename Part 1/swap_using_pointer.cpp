#include<iostream>
using namespace std;
int main()
{
    int a,b,c,*p1,*p2;
    cout <<"Enter the value of a:";
    cin >>a;
    cout<<"Enter the value of b:";
    cin >>b;
    p1=&a;
    p2=&b;
    c=*p1;
    a=*p2;
    b=c;
    cout << "After Swapping\n"<<"a="<<a<<"\t"<<"b="<<b;
}
