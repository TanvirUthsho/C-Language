#include <stdio.h>

int main()
{
    int x, i;
    printf("Enter an integer: ");
    scanf("%d", &x);
    for (i = -x + 1; i < x; ++i)
        printf("%d\n", i);
    return 0;
}