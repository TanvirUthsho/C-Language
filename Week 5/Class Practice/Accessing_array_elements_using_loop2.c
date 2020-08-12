#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the length of Array:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is: %d", sum);
    return 0;
}