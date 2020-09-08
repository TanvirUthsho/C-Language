#include <stdio.h>
int main()
{
    int i;

    for (i = 500; i <= 1000; i++)
    {
        if ((i % 3) == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}