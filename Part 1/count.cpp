#include<iostream>
#include<stdio.h>
using namespace std;
class counts
{
private:
    int i,k;
    char s[10];
public:
    counts(int m,int n)
    {
        i=m;
        k=n;
    }
    void input()
    {
        cout << "Enter the Sentence:";
        gets(s);
    }
    void show()
    {
        while(s[i]!='\0')
        {
            if(s[i]==' ' && s[i+1]!=' ')
                k++;
            i++;
        }
        cout << "No of word= "<<(k+1);
    }
};
int main()
{
    counts a(0,0);
    a.input();
    a.show();
}

