//an integer as an input and determines whether it is a multiple of 7 or not.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a integer whether it is a multiple of 7 or not:");
    scanf("%d", &x);
    if(x%7==0)
    {
        printf("%d is multiple of 7",x);

    }
    else
    {
        printf("%d isn't a multiple of 7",x);
    }
        return 0;
}
//Output:
//Enter a integer whether it is a multiple of 7 or not:49       
//49 is multiple of 7