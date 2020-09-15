#include <stdio.h>
#include <string.h>
int main()
{
    char someStr[100] = "I love Bangladesh";
    int n;
    n = strlen("Hello world");
    printf("Length of Hello world = %d\n", n);
    n = strlen(someStr);
    printf("Length of %s = %d\n", someStr, n);
    gets(someStr);
    n = strlen(someStr);
    printf("Length of %s = %d\n", someStr, n);
    return 0;
}