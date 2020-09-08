/* Write a program that will take input of two matrices and perform the multiplication (dot product)
of those matrices storing the result in another matrix. Before performing the multiplication, the
two matrices need to go through a dimensionality check whether the matrices are of the size M X
N = N X P; meaning the number of columns in the first matrix should be equal to the number of
rows in the second matrix. User should be asked to input such matrices where the dimensionality
match accordingly, and If the dimensionality does not match/user gives wrong dimensions
willingly, the program will not try to perform the multiplication operation and hence will return
before that.*/

#include <stdio.h>

int main()
{
    int row1, column1, row2, column2, i, j, k, sum = 0;
    printf("Enter row for 1st matrix:");
    scanf("%d", &row1);
    printf("Enter column for 1st matrix:");
    scanf("%d", &column1);
    int arr1[row1][column1];
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("Array 1 [%d] [%d]", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter row for 2nd matrix:");
    scanf("%d", &row2);
    printf("Enter column for 2nd matrix:");
    scanf("%d", &column2);
    int arr2[row2][column2];
    if (row2 == column1)
    {
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("Array 2 [%d] [%d]", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }

        int newArr[row1][column2];
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                for (k = 0; k < row2; k++)
                {
                    sum = sum + arr1[i][k] * arr2[k][j];
                }
                newArr[i][j] = sum;
                sum = 0;
            }
        }
        printf("New array after dot multiplication:\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("%d\t", newArr[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nDimension error! Multiplication isn't possible.\n");
    return 0;
}
