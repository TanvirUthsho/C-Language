//Print Star Pyramid
#include <stdio.h>
void printPyramid(int N);

int main()
{
    int n; //Declaring variables

    printf("Enter a number of rows:");
    scanf("%d", &n); //Taking inputs
    printf("\n");

    printPyramid(n); //Printing the pyramid using function

    return 0;
}

//The void printPyramid(int N) function
void printPyramid(int N)
{
    int i, j; //Declaring variables

    for (i = 1; i <= N; i++) //using nested for loop for pyramid
    {
        for (j = N - i; j >= 1; j--) //loop for printing spaces
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++) //loop for printing asterisks
        {
            printf("*");
        }
        printf("\n");
    }
}