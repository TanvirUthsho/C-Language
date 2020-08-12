#include <stdio.h>
int main()
{
    int A[100][100], i, j, rows, columns;
    printf("Number of rows: ",rows);
    scanf("%d", &rows);
    printf("Number of columns: ");
    scanf("%d", &columns);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Values in array A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%10d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}