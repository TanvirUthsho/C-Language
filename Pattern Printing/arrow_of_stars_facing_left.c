
#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter value of n : "); // user defined input
    scanf("%d", &n);  // user will defined how many times loop will execute by n.
    for(i=1; i<n; i++)  // for loop check condition,suppose n=4,i will execute 3 time 3 rows will genarated.
    {
        for(j=1; j<=(2*i-2); j++) //if j is less than equal to  2 time i minus to than this will print the blank colums if the i execute 3 time then for i=1 ,j will not satisied,for i=2 it will print 2blank colums and i=3,it will print 3 blank colums
        {
            printf(" ");
        }
        for(j=i; j<=n; j++) // it will print star for i=1 it will print 3 star i =2 it print 2 star and i=3 it print 1 star
        {
            printf("*");
        }

        printf("\n");
    }
    for(i=1; i<=n; i++) // if n=4 there will be create 4 rows
    {
        for(j=1; j<=(2*n - 2*i); j++) //if i= 1 time execute then for i=1,it will print six blank colums fpr i=2,it will print 4 blank colums,i=3, it will print 2 blank colums,i=4 it will print no blank colums.
        {
            printf(" ");
        }
        for(j=1; j<=i; j++) //for i=1 it will print 1 colums,i=2 it will print 2 star colums,i=3 it will print 3 star colums,i=4 it will print 4 star colums
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}