#include <stdio.h>
int emailsValid(char s[])
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    int adcount = 0;
    int dot = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '@')
        {
            adcount++;
        }
        if (s[i] == '.')
        {
            dot++;
        }
    }
    if (adcount == 1 && dot <= 3)
        return 1;
    else
        return 0;
}
int main()
{
    char mail[1000];
    printf("Enter Mail: ");
    fflush(stdin);
    scanf("%[^\n]s", &mail);
    int ans = emailsValid(mail);
    if (ans == 1)
        printf("\nValid Email!");
    else
        printf("\nInvalid Email!");
    return 0;
}