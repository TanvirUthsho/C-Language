#include <stdio.h>
int length(char *s);

void main()
{
    char str1[25];
    int l;
    printf("\nCalculate the length of the string :\n");
   

    printf(" Input a string : ");
    fgets(str1, sizeof str1, stdin);

    l = length(str1);
    printf(" The length of the given string %s is : %d ", str1, l - 1);
    printf("\n\n");
}

int length(char *s) // ch = base address of array str1 ( &str1[0]  )
{
    int ctr = 0;
    while (*s != '\0')
    {
        ctr++;
        s++;
    }
    return ctr;
}