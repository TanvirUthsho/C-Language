#include <stdio.h>
void numberPatternPrint(int N); //Declaring function for printing pattern

int main()
{
    int n; //Declaring integer variables

    printf("Enter a number:");
    scanf("%d", &n); //Taking inputs
    printf("\n\n");

    numberPatternPrint(n); //using the void function to print the pattern

    return 0;
}

//The void numberPatternPrint(int N) function
void numberPatternPrint(int N)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        if (i % 2 == 1) //Using if else statment and modulas to differentiate between odd and even
            for (j = 1; j <= (i + 1) / 2; j++)
            {
                printf("%d", 2 * j - 1);
                printf(" ");
            }
        else
            for (j = 1; j <= i / 2; j++)
            {
                printf("%d", 2 * j);
                printf(" ");
            }
        printf("\n");
    }
}
