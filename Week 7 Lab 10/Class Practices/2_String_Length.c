#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];
    char str2[10];
    char str3[20];
    int chk;
    gets(str1);
    gets(str2);
    chk = strcmp(str1, str2);
    printf("%d", chk);
    if (chk == 0)
        printf("Same");
    if (chk < 0)
        printf("str1 is smaller");
    if (chk > 0)
        printf("str2 is smaller");
    return 0;
}