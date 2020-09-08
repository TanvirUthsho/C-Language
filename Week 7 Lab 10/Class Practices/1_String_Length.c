#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10];
    char str2[10];
    char str3[20];
    int len;
    gets(str1);
    gets(str2);
    /* copy str1 into str3 */
    strcpy(str3, str1);
    printf("strcpy(str3,str1): %s\n", str3);
    /* concatenates str1 and str2 */
    strcat(str1, str2);
    printf("strcat(str1,str2): %s\n", str1);
    /* total length of str1 after concat */
    len = strlen(str1);
    printf("strlen(str1) : %d\n", len);
    return 0;
}