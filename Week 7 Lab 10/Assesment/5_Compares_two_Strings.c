#include <stdio.h>
#include <String.h>
int compare(char str1[], char str2[]);

int main()
{
    char a[12];
    char b[12];
    gets(a);
    gets(b);
    int result = compare(a, b);

    printf("Compare Result:%d", result);
    return 0;
}
int compare(char str1[], char str2[])
{
    int i = 0, d;
    while (str1[i] != '\0' || str2[i] != '\0')
    {
        d = str1[i] - str2[i];
        if (d != 0)
            break;
        i++;
    }
    if (d > 0)
    {
        return 1;
    }
    if (d < 0)
    {
        return -1;
    }
    if (d == 0)
    {
        return 0;
    }
}
