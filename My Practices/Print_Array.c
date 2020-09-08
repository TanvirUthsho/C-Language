#include <stdio.h>

int main()
{
    int arr[5],i;

    for(i=0; i<5; i++)
    {
        printf("Enter Elements in array:");
        scanf("%d", &arr[i]);
    }


    
    printf("\nElements in array are: ");
    for(i=0; i<5; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}