#include<stdio.h>
int main()
{
    int var;
    int i;
    printf("Enter Your Desired number of rows in the table: ");
    scanf("%d",&var);
    printf("\nNUMBER\tSQUARE\tQUBE\n");
    printf("====================\n");
    for ( i = 1; i <=var; i++)
    {
        printf("%d\t%d\t%d\n",i, i*i,i*i*i);

    }
    return 0;
    

}