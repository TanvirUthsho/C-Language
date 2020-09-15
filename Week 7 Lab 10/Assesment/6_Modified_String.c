#include <stdio.h>
#include <String.h>
void Replace(char arr[], char oldChar, char newChar);

int main()
{
    char a[20], p, q;
    gets(a);
    printf("Enter your desire and replace character :");
    scanf("%c %c", &p, &q);
    Replace(a, p, q);
    return 0;
}
void Replace(char arr[], char oldChar, char newChar)
{

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
        printf("%c", arr[i]);
    }
}