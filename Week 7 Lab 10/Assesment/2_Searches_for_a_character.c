#include <stdio.h>
#include <string.h>
void search(char arr[], char key);

int main()
{
    char str[20];
    char n;
    gets(str);
    scanf("%c", &n);

    search(str, n);

    return 0;
}
void search(char arr[], char key)
{
    int f = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == key)
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
        printf("Found");
    else
        printf("Not found");
}