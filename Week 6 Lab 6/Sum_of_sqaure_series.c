#include <stdio.h>
int sumSeries(int N); //declaring function to find the summation of series

int main()
{
    int a, Sum; //Declaring variables
    printf("Enter a number:");
    scanf("%d", &a); //taking variable input

    Sum = sumSeries(a); //using the function

    printf("The sum is:%d\n\n", Sum); //Printing the Sum

    return 0;
}

//The int sumSeries(int N) function
int sumSeries(int N)
{
    int i, sign, sum;

    sum = N * N; //Declaring initial value of sum
    sign = 1;    //Declaring initial value of sign

    for (i = 1; i < N; i++)
    {
        sign = -1 * sign; //multiplying -1 with sign every time to substract and add
        sum = sum + sign * (N - i) * (N - i);
    }

    return sum;
}