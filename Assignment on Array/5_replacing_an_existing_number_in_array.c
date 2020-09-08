/* Write a program which will take an array as input from user (or hard coded inside program), later
it will take another two inputs: firstly, the position of an element and then the element. The position
should be within the range of the size of the array. The new input will later replace the existing
number in array at the index/position.*/

#include <stdio.h>

void replacePosition(int n, int arr[], int position, int replace_by);
int main()
{
    int size, position, replace_by;
    printf("Enter range for array: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        printf("A [%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Position you want to replace:");
    scanf("%d", &position);
    if (position >= 1 && position <= size)
    {
        printf("Enter element to replace:");
        scanf("%d", &replace_by);
        replacePosition(size, arr, position, replace_by);
    }
    else
        printf("Please enter position to replace within 1 to %d\n", size);
    return 0;
}

void replacePosition(int n, int arr[], int position, int replace_by)
{
    arr[position - 1] = replace_by;
    printf("\nArray after replacing:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
}