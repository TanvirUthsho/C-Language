#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter number:\n");
    scanf("%d", &a);
    printf("Enter number:\n");
    scanf("%d", &b);
    printf("Enter number:\n");
    scanf("%d", &c);
    if (a >= b && a >= c)
    {
        if (b >= c)
        {

            printf("Second largest number is %d", b);
        }
        else
        {
            printf(" Second largest number is %d", c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("Second largest number is %d", a);
        }
        else
        {
            printf("Second largest number is %d", c);
        }
    }
    else if (a >= b)
    {
        printf("Second largest number is %d", a);
    }
    else
    {
        printf("Second largest number is %d", b);
    }

    return 0;
}