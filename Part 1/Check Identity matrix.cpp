#include<iostream>
using namespace std;
int main()
{
    int a[100][100],i,j,r,c,f=0;
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
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
           if(a[i][i]!=0)
           {
              f=1;
              break;
           }
        }
        if(f==1)
            cout << "Not Identity Matrix";
        else
            cout << "Identity Matrix";
    }
    else
        cout << "Not possible";
}
