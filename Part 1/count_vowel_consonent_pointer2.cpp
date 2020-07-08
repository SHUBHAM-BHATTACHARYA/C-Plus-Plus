#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
    char str[150];
    char *p;
    int i, vowels, consonants, digits, spaces;
    vowels =  consonants = digits = spaces = 0;
    cout << "Enter Sentence:";
    gets(str);
    p=str;
    while(*p!='\0')
    {
        if(*p=='a' || *p=='e' || *p=='i' ||
           *p=='o' || *p=='u' || *p=='A' ||
           *p=='E' || *p=='I' || *p=='O' ||
           *p=='U')
        {
            ++vowels;
        }
        else if((*p>='a'&& *p<='z') || (*p>='A'&& *p<='Z'))
        {
            ++consonants;
        }
        else if(*p>='0' && *p<='9')
        {
            ++digits;
        }
        else if (*p==' ')
        {
            ++spaces;
        }
        p++;
    }
    cout << "Vowels:"<<vowels<<"\n";
    cout << "Consonants:"<<consonants<<"\n";
    cout << "Digits:"<<digits<<"\n";
    cout << "White spaces:"<<spaces;
}
