#include <stdio.h>
void upper_pyramid(int n);
void lower_pyramid(int n);
int main()
{
    int x;
    printf("Enter n:");
    scanf("%d",&x);
    upper_pyramid(x);
    lower_pyramid(x);
    return 0;
}
void upper_pyramid(int n)
{
    int i, j;
    for (i = 1; i <= n; i += 2)
    {
        for (j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void lower_pyramid(int n)
{
    int i, j;
    for (i = n; i >= 1; i -= 2)
    {
        for (j = 1; j <= (n - i) / 2; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}