/* 3. Write a program that searches for duplicate numbers in an array. If the
program finds duplication of numbers, it will print the index of those numbers
 and the numbers themselves as well.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, j;
    printf("Enter array length:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Numbers:");
        scanf("%d", &a[i]); // Take user input from array.
    }
    printf("Duplicate elements in are:");
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        { // It will depend the value of i position.
            if (a[i] == a[j])
            {
                printf("%d", a[i]);
            }
        }
    }
    return 0;
}
