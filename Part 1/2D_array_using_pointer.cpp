#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,sum=0;
    int **p;
    cout << "Enter the No of Row of Array:";
    cin >> r;
    cout << "Enter the No of Column of Array:";
    cin >> c;
    p=new int *[c];
    for(i=0;i<c;i++)
    {
        *(p+i)=new int [r];
    }
    cout << "Enter the Array Elements\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cin >> *(*(p+i)+j);
    }
    cout << "The 2D Array is\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout << *(*(p+i)+j) << " ";
        cout << "\n";
    }
}
