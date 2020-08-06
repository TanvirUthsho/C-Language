#include <stdio.h>
int main()
{
    int n, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d+", i);
        sum += i; //sum = sum + i;
    }

    printf("\b=%d", sum);

    return 0;
}