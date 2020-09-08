#include <stdio.h>
int sum(int n);
int main()

{

    int x;
    printf("Enter n:");
    scanf("%d", &x);
    printf("%d\n", sum(x));
    return 0;
}
int sum(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        /* code */ sum += i;
    }
    return sum;
}
