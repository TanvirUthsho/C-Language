#include <stdio.h>
#include <String.h>
void reverse(char arr[]);

int main()
{
    char str[20];
    int n;
    gets(str);
    reverse(str);
    return 0;
}
void reverse(char arr[])
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    printf("String order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\nReverse order:\n");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
}