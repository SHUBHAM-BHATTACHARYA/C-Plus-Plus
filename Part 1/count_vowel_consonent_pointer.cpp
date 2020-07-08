#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char str[100];
    char *p;
    int  vCount=0,cCount=0;
    cout << "Enter any string:";
    gets(str);
    p=str;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        else
            cCount++;
        p++;
    }
    cout << "Number of Vowels in String:" << vCount<<"\n";
    cout << "Number of Consonants in String:"<<cCount;
}
