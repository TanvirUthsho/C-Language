#include <stdio.h>

int computeAverage(int a, int b);
int main()
{
    int a, b;
    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Average is: %d", computeAverage(a, b));
    return 0;
}

int computeAverage(int a, int b)
{
    int avg = (a + b) / 2;
    return avg;
}