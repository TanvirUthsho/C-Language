#include <stdio.h>
int main()
{
    int i, a, sum;
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        sum += a;
    }
    printf("Total is %d\n", sum);
    return 0;
}