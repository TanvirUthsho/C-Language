#include <stdio.h>
#include <math.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    if (num > 0.0)
       {
        if((num - (int)num)==0)
           printf("You entered a Natural number.");
        else if ((num-sqrt(pow(num,2)))==0)
           printf("You entered a Positive Rational number");
        else
           printf ("You entered an Irrational number");
       }
    else if (num < 0.0)
            {
             if((num-(int)num)==0)
               printf("You entered a Negative Integer");
             else if((num+sqrt(pow(num,2)))==0)
               printf("you entered a Negative Rational number");
             else
               printf("You entered a Negative Irrational number");
            }
    else
       printf("You entered zero");

    return 0;
}
