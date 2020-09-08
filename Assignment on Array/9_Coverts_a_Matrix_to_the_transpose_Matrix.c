/* Write a program that coverts a matrix to the transpose of that matrix.
Transpose matrix means the elements in rows of the given matrix will go to
the columns of the resultant matrix and vice versa for the elements of the
columns.*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, a[10][10], c[10][10];
    int n1, m1;

    printf("Enter any two number:");
    scanf("%d %d", &n1, &m1); // Take columns and rows value.

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]); // Take value from user.
        }
    }
    printf("Original matrix:\n");
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {

            printf("%d\t", a[i][j]); // Printing those value.
        }
        printf("\n");
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < m1; j++)
        {
            c[j][i] = a[i][j];
        }
    }
    printf("Transpose matrix:\n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", c[i][j]); // Printing transpose matrix value.
        }
        printf("\n");
    }
    return 0;
}