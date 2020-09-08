#include <stdio.h>

int main()
{
    int arr[5];
    int i, max;
    printf("Enter elements in the array: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < 5; i++)
    {

        {
            max = arr[i];
        }
    }

    printf("Maximum element = %d\n", max);

    return 0;
}