#include <stdio.h>
void printFibonacci(int N); //Function to print fibonacci till nth term

int main()
{
    int n; //Declaring variables

    printf("Enter a number:");
    scanf("%d", &n); //Taking Inputs

    printf("Fibonacci Series:");

    printFibonacci(n); //Using the void function to print Fibonacci series till nth term

    printf("\n\n");

    return 0;
}

//The void printFibonacci(int N) function
void printFibonacci(int N)
{
    int i, j; //Declaring variables
    int a[N]; //Using array to keep inputs
    a[0] = 0; //declaring first variable of array for the first Fibonacci
    a[1] = 1; //declaring second variable of array for the second fibonacci

    for (i = 2; i <= N; i++)
    {
        a[i] = a[i - 1] + a[i - 2]; //calculation for fibonacci series
    }
    for (i = 0; i <= N - 1; i++)
    {
        printf("%d ", a[i]); //Printing the fibonacci series
    }
}