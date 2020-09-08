#include <stdio.h>
int sum_series(int x, int m);
int main()
{
    int x1, m1, result1, x2, m2, result2;
    printf("Enter x1 and m1 value: ");
    scanf("%d%d", &x1, &m1);
    result1 = sum_series(x1, m1);
    printf("\nSum= %d", result1);
    printf("\nEnterx2 and m2 value: ");
    scanf("%d%d", &x2, &m2);
    result2 = sum_series(x2, m2);
    printf("\nSum= %d", result2);
    return 0;
}
int sum_series(int x, int m)
{
    int i, sum = 1, term = 1;
    for (i = 1; i <= m; i++)
    {
        term = term * x;
        sum = sum + term;
    }
    return sum;
}