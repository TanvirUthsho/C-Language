/* Write a program that takes input of two matrices from user and later perform the addition of the
two matrices printing in another resultant matrix. */

#include <stdio.h>

void add_matrices(int row1, int column1, int arr1[][column1], int row2, int column2, int arr2[][column2]);
int main()
{
    int row1, column1, row2, column2, i, j;
    printf("Enter row for 1st matrix:");
    scanf("%d", &row1);
    printf("Enter column for 1st matrix:");
    scanf("%d", &column1);
    int arr1[row1][column1];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("Array 1 [%d] [%d]=", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter row for 2nd matrix:");
    scanf("%d", &row2);
    printf("Enter column for 2nd matrix:");
    scanf("%d", &column2);
    int arr2[row2][column2];
    for (i = 0; i < row2; i++)
    {
        for (j = 0; j < column2; j++)
        {
            printf("Array 2 [%d] [%d]=", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    add_matrices(row1, column1, arr1, row2, column2, arr2);
    return 0;
}

void add_matrices(int row1, int column1, int arr1[][column1], int row2, int column2, int arr2[][column2])
{
    int i, j, add[row1][column1];
    if (row1 == row2 && column1 == column2)
    {
        printf("\nNew array after addition:\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                add[i][j] = arr1[i][j] + arr2[i][j];
                printf(" %d", add[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Dimension error! Enter same row and column for addition.");
}