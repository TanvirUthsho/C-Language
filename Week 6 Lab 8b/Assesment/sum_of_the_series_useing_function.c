#include <stdio.h>
#include <math.h>

int seriesSum1(int a);
int main()
{
    int n, sum;
    printf("Enter a:\n");
    scanf("%d", &n);
    sum = seriesSum1(n);
    printf("%d", sum);
    return 0;
}

int seriesSum1(int a)
{
    int i, sum = 0;
    for (i = 0; (a - i) <= 1; i++)
    {
        if (i % 2 == 0)
            sum = sum + pow((a - i), 2);
        else
            sum = sum - pow((a - i), 2);
    }
    return sum;
}