#include <stdio.h>
void main()
{
    int i, n;
    float term, s = 0.0;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
       
     term = 1.0 / i;
     s = s + term;
    }
    printf("\n 1/%d+",i++);
    printf("\nSum of Series : %f \n", s);
}