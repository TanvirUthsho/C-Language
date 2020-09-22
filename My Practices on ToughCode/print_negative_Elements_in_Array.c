#include <stdio.h>
#define Max_Size 100
int main()
{
    int arr[Max_Size], i, N;
    printf("Enter size of the array : ");
    scanf("%d", &N);
    printf("Enter elements :");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nAll negative elements in array are : ");
    for (i = 0; i < N; i++)
    {
        if (arr[i] < 0)
            
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}