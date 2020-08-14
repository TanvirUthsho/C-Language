#include <stdio.h>

void search(int arr[], int size, int key)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
            printf("element found\n");
        else
            printf("\nNot found");
    }
}

int main()
{
    int arr[90], i, size, key;

    printf("Enter size of the  array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key : ");
    scanf("%d", &key);

    search(arr, size, key);
}
