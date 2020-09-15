#include <stdio.h>
#include <String.h>
int length(char arr[]);

int main()
{
    char str1[20];
    gets(str1);
    int result = length(str1);
    printf("Result will:%d", result);
    return 0;
}
int length(char arr[])
{

    int i = 0, count = 0;
    while (arr[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}