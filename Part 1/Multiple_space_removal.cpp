#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char s1[100];
    int i=0;
    cout << "Enter the String1:";
    gets (s1);
    cout << "String is :";
    while(s1[i]!='\0')
    {
        if (s1[i]!=' ')
            cout << s1[i];
        i++;
    }
}
