#include <stdio.h>
int main()
{
   int i, fact = 1, num;

   printf("Please Enter a positive integer to find factorial : ");
   scanf("%d", &num);

   if (num < 0)
   {
      printf("\nSorry!A negative integer has been Entered");
      return 1;
   }

   for (i = 1; i <= num; i++)
      fact = fact * i;

   printf(" Factorial of %d is %d\n", num, fact);
   return 0;
}