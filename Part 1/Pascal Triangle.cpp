#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,f=1;
    cout << "Enter No of Rows:";
    cin >> n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
            cout << " ";
        for(k=0;k<=i;k++)
        {
            if(k==0 || i==0)
                f=1;
            else
                f=f*(i-k+1)/k;
            cout << f << " ";
        }
        cout << "\n";
    }
}
