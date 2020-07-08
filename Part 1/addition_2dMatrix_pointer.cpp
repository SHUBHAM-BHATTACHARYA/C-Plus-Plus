#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2,r,c,i,j,sum=0;
    int **p1,**p2,**p;
    cout << "Enter the No of Row of Matrix1:";
    cin >> r1;
    cout << "Enter the No of Column of Matrix1:";
    cin >> c1;
    p1=new int *[c1];
    for(i=0;i<c1;i++)
    {
        *(p1+i)=new int [r1];
    }
    cout << "Enter the Elements of Matrix1\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            cin >> *(*(p1+i)+j);
    }
    cout << "Enter the No of Row of Matrix2:";
    cin >> r2;
    cout << "Enter the No of Column of Matrix2:";
    cin >> c2;
    p2=new int *[c2];
    for(i=0;i<c2;i++)
    {
        *(p2+i)=new int [r2];
    }
    cout << "Enter the Elements of Matrix2\n";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            cin >> *(*(p2+i)+j);
    }
    r=r1;
    c=c1;
    p=new int *[c];
    for(i=0;i<c;i++)
    {
        *(p+i)=new int [r];
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            *(*(p+i)+j)=*(*(p1+i)+j)+*(*(p2+i)+j);
    }
    cout << "The Addition of 2D Matrix is\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            cout << *(*(p+i)+j) << " ";
        cout << "\n";
    }
}

