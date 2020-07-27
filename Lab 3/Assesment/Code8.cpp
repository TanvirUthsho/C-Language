//Finding Positive or Negative Number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number to find whether it is Negative or not:");
    scanf("%d", &x);
    if(x>0)
    {
        if(x<0)
    {
    printf("%d is a Negative Number");
    }
    else
    {
        printf("%d is a Positive Number");

    }
    }
    return 0;


}