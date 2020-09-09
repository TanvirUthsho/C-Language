#include <stdio.h>
void reverse(char *s);
int main()
{
    char str[20];
    gets(str);
    reverse(str);
    puts(str);
    return 0;
}
void reverse(char *s)
{
    int i, len = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    for (i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}