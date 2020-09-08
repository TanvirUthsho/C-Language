#include <stdio.h>
int sumOfDigits(int x);
int main()
{
    int x;
    printf("Enter x:");
    scanf("%d", &x);
    printf(" %d ", sumOfDigits(x));
    return 0;
}
/* Function to get sum of digits */
int sumOfDigits(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum = sum + x % 10;
        x = x / 10;
    }
    return sum;
}
