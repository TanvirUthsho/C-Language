#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        printf("\n");
        for (int j = 1; j <= 10; j++)
        {
            printf("%d X %d = %d\n", i, j, i * j);
        }
    }
    printf("\n");
    return 0;
}