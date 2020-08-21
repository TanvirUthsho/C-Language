#include <stdio.h>

void fibonacci(int n);
int main()
{
    int term;
    printf("Enter fibonacci terms:");
    scanf("%d", &term);
    fibonacci(term);
    return 0;
}

void fibonacci (int n)
{
    int i, first=0, second=1, fibo;     //first 2 terms will be always 0, 1.
    for(i=0; i<n; i++)
    {
        if(i<=1)
           fibo=i;
        else
        {
            fibo = first+second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
    }
}