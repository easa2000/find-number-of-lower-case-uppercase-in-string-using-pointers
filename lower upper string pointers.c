// find number of lower and uppercase in string using pointers
#include<stdio.h>
void main()
{
    char str[100], *pstr;
    int upper = 0, lower = 0;
    printf("\n Enter a String: ");
    gets(str);
    pstr = str;

    while(*pstr != '\0')
    {
        if(*pstr >= 'A' && *pstr <= 'Z')
            upper++;
        else if(*pstr >= 'a' && *pstr <= 'z')
            lower++;
        pstr++;
    }
    printf("\n Total number of upper case characters = %d",upper);
    printf("\n Total number of lower case characters = %d",lower);
}
