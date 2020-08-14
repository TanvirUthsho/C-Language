#include <stdio.h>
int main()
{
    int i;
    int arr[5];
    for (i = 0; i < 5; ++i)
    {
        printf("Enter number%d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < 5; ++i)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    printf("Largest element=%d", arr[0]);
    return 0;
}