//Program that calculates the sum of a specific column in array

#include <stdio.h>

int main()
{
    int rows, columns, i, j, sum = 0, n, k; //declaring variables

    printf("Enter number of rows:");
    scanf("%d", &rows);

    printf("Enter number of columns:");
    scanf("%d", &columns);

    int A[rows][columns]; //declaring array name,size and data type

    printf("Enter elements:");

    for (i = 0; i < rows; i++) //using nested for loop for taking 2D inputs
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter which column to find sum of:");
    scanf("%d", &n);

    for (k = 0; k < rows; k++) //using for loop for summation of all the inputs in a column
    {
        sum = sum + A[k][n - 1];
    }

    printf("Sum of column %d: %d", n, sum);

    return 0;
}