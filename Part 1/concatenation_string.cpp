#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,j=0;
    char s1[100],s2[100],s3[100];
    cout << "Enter the String1:";
    gets (s1);
    cout << "Enter the String2:";
    gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        s3[j]=s1[i];
        j++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        s3[j]=s2[i];
        j++;
    }
    s3[j]='\0';
    puts(s3);
}
