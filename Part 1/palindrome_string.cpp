#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i=0,j,f;
    char s[100];
    cout << "Enter the String\n";
    gets (s);
    j=strlen(s)-1;
        while(i<=j)
        {
            if (s[i]==s[j])
             {
                 f=1;
             }
             else
             {
                 f=0;
                 break ;
             }
             i++;
             j--;
          }
        if(f==1)
            cout << "String is Palindrome";
        else
            cout << "String is not Palindrome";
}
