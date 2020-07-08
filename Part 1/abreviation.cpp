#include<iostream>
#include<stdio.h>
using namespace std;
class abreviation
{
private:
    int i,k;
    char s[10];
public:
    abreviation(int m,int n)
    {
        i=m;
        k=n;
    }
    void input()
    {
        cout << "Enter the Name:";
        gets(s);
    }
    void output()
    {
        cout << ("Abreviation=") << s[0];
        while(s[i]!='\0')
        {
            i++;
            if(s[i]==' ' && s[i+1]!=' ')
                cout <<"."<< s[i+1];
        }
    }
};
int main()
{
    abreviation a(0,0);
    a.input();
    a.output();
}
