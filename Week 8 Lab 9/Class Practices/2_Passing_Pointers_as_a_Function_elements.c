#include <stdio.h>
void print(char *s);
int main()
{
    char str[] = "simple";
    print(str);
    return 0;
}
void print(char *s)
{
    while (*s != '\0')
    {
        printf("%c", *s);
        s++;
    }
}