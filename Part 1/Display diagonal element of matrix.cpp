#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,r,c;
    cout << "Enter the No. of Row:";
    cin >> r;
    cout << "Enter the No. of Column:";
    cin >> c;
    cout << "Enter the elements of Matrix Row-wise\n";
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            cin >> a[i][j];
    cout << "Matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout << " " << a[i][j];
        cout << "\n";
    }
    cout << "The Diagonal elements is:";
    if(r==c)
    {
       for(i=0;i<r;i++)
           cout << a[i][i] << "\t";
    }
    else
        cout << "Not possible";
}
