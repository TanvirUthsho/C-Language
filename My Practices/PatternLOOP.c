#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            if (i % 2 == 0)
                printf("*");
            else
                printf("+");
        }
        printf("\n");
    }
    return 0;
}
