#include <stdio.h>

void findEvenOdd(int arr[], int n);
int main()
{
    int n;
    printf("Enter array length:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    findEvenOdd(arr, n);
    return 0;
}

void findEvenOdd(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is even\n", arr[i]);
        }
        else if (arr[i] % 2 != 0)
        {
            printf("%d is odd\n", arr[i]);
        }
    }
}