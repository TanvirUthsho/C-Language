#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
//We can use 93>=num>=100 format
    if(num>=93&&num<=100)
        printf("Congratulations! Your grade is A (Excellent)");
    else if(num>=90&&num<=92)
        printf("Congratulations! Your grade is A-");
    else if(num>=87&&num<=89)
        printf("Congratulations! Your grade is B+");
    else if(num>=83&&num<=86)
        printf("Your grade is B (Good)");
//we can also use 82<=num<=80 format
    else if(num<=82&&num>=80)
        printf("Your grade is B-");
    else if(num>=77&&num<=79)
        printf("Your grade is C+");
    else if(num>=73&&num<=77)
        printf("Your grade is C (Average)");
    else if(num>=70&&num<=72)
        printf("Your grade is C-");
    else if(num>=67&&num<=69)
        printf("Your grade is D+");
    else if(num>=60&&num<=66)
        printf("Your Grade is D (Poor)");
    else if(num<60&&num>=0)
        printf("Sorry! You have failed.");
    else if(num<0)
        printf("You cannot input a Negative number");
    return 0;
}