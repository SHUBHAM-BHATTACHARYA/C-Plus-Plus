#include<iostream>
using namespace std;
int main()
{
    int i,n,a[100],c=0,item;
    cout << "Enter the No of element:";
    cin >> n;
    cout << "Enter the numbers\n";
    for(i=0;i<n;i++)
    {
        cout << "a["<<i<<"]:";
        cin >> a[i];
    }
    cout << "Enter the No:";
    cin >> item;
    for(i=0;i<n;i++)
    {
        if(a[i]==item)
           c++;
    }
    cout << item <<" appears " << c <<" times";
}
