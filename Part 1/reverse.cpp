#include<iostream>
#include<cstdio>
using namespace std;
class Reverse
{
private:
    int i,k,l;
    char s[10];
public:
    Reverse(int m,int n)
    {
        i=m;
        l=n;
    }
    void input()
    {
        cout << "Enter the Name:";
        gets(s);
    }
    void output()
    {
        for(i=0;s[i]!='\0';i++)
            l++;
        for(i=0;i<=(l/2);i++)
        {
            k=s[l-1];
           s[l-1]=s[i];
            s[i]=k;
            l--;
        }
        puts (s);
    }
};
int main()
{
    Reverse a(0,0);
    a.input();
    a.output();
}

