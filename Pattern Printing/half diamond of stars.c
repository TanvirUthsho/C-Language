#include<stdio.h>

int main()
{
    int i, j, N, columns;
    printf("Enter number of columns:");//input number of colums for user sote in N;
    scanf("%d",&N);

    columns=1;

    for(i=1;i<N*2;i++) // run an outer loop 2 tyms of user input
    {
        for(j=1; j<=columns; j++) // number of colums in inner loops print star
        {
            printf("*");
        }

        if(i < N)
        {
            columns++; //incremental colums
        }
        else
        {
            columns--; //decremental colums
        }
        printf("\n"); //print new line
    }

    return 0;
}