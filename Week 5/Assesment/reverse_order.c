#include <stdio.h>
int main()
{
    int arr[5];
    int n, i;
    printf("Enter elements in Array:");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nArray in Reverse Order\n");
    for (i = 5 - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}