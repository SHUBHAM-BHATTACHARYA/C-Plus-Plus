#include<iostream>
using namespace std;
int main()
{
    int i,j,item,a[100],n,pos;
    cout << "Enter the no of elements:";
    cin >> n;
    cout << "Enter the numbers\n";
    for(i=0;i<n;i++)
    {
        cout << "a["<<i<<"]:";
        cin >> a[i];
    }
        cout << "Enter the new position:";
        cin >> pos;
        cout << "Enter the item to be insert:";
        cin >> item;
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=item;
    for(i=0;i<=n;i++)
        cout <<" "<< a[i];
}

