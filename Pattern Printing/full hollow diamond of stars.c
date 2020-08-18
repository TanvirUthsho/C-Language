
#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value of n : ");//user defined input
    scanf("%d", &n);
    for(i=1; i<=n; i++) //suppose n=3 then 3 row will create
    {
        for(j=i; j<=n; j++)//for i=1,three star colum will print,i=2 two star ,i =3 1 star cloum will print
        {
            printf("*");
        }

        for(j=1; j<=(2*i-2); j++)// for i=1 no blank colum will print ,for i=2,2 blank colum will print,for i=3 3 blank colum will print
        {
            printf(" ");
        }

        for(j=i; j<=n; j++) // for i=1 ij the right side 3 star colum will print ,i=2,2 tar colum will print,i=3 three star colums will print
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=n; i++)     //for this will print for left down rows 3 rows will execute
    {
        for(j=1; j<=i; j++)//this will print for gradully 3,2,1 colums for 1 ,2 3 rows in the left
        {
            printf("*");
        }

        for(j=(2*i-2); j<(2*n-2); j++)// this will print blank colums
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)// this will print 3 colums right star
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}