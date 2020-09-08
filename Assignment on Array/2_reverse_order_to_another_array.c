#include <stdio.h>

void reverseArr(int arr[], int n);
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
    reverseArr(arr, n);
    return 0;
}

void reverseArr(int arr[], int n)
{
    int i = 0, revArr[n];
    for (int j = n - 1; j >= 0; --j)
    {
        revArr[j] = arr[i];
        i++;
    }
    printf("Main array:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("a[%d] = %d\n", i, arr[i]);
    }
    printf("Reverse Array:\n");
    for (int i = 0; i < n; ++i)
        printf("a[%d] = %d\n", i, revArr[i]);
}