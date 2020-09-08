#include <stdio.h>
void printString(char s[]);
int main()
{
    char str1[10];
    gets(str1);
    printString(str1);
    return 0;
}
void printString(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        printf("%c", s[i]);
        i++;
    }
}