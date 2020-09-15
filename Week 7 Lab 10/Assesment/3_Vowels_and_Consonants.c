#include <stdio.h>
#include <String.h>
void count(char arr[]);

int main()
{
    char str[20];
    gets(str);
    count(str);
    return 0;
}
void count(char arr[])
{
    int vowel = 0, consonant = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if ((arr[i] == 'a' || arr[i] == 'A') || (arr[i] == 'E' || arr[i] == 'e') || (arr[i] == 'i' || arr[i] == 'I') || (arr[i] == 'o' || arr[i] == 'O') || (arr[i] == 'u' || arr[i] == 'U'))
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    printf("Number of Vowel:%d\n", vowel);
    printf("Number of consonant:%d\n", consonant);
}
