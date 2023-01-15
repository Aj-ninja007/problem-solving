#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    int i;
    printf("enter the string");
    gets(s);
    strrev(s);
    printf("%s",s);
}