#include<iostream>
using namespace std;
int main()
{
    int i,a[100],n,k;
    cout << "Enter the no of elements:";
    cin >> n;
    cout << "Enter the numbers\n";
    for(i=0;i<n;i++)
    {
        cout << "a["<<i<<"]:";
        cin >> a[i];
    }
    k=a[0];
    for(i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=k;
    for(i=0;i<n;i++)
        cout <<" "<< a[i];
}
