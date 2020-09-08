/* Write a program that searches for duplicate numbers in an array. If the program finds duplication
of numbers, it will print the index of those numbers and the numbers themselves as well.*/

#include <stdio.h>

void findDup(int arr[], int n);
int main()
{
    int size;
    printf("Enter array range:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    findDup(arr, size);
    return 0;
}

void findDup(int arr[], int n)
{
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        int a = 0, temp[n];
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                ;
            {
                temp[a] = arr[i];
                count++;
                arr++;
            }
        }
    }
    for (arr = 0; arr < n;)
}