#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *chptr;
    chptr = str;
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", *chptr + i);
        i++;
    }
    return 0;
}