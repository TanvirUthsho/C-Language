#include <stdio.h>
int main()
{
   int i,fact=1,num;
 
   printf("\nPlease enter a number to find factorial : ");
   scanf("%d",&num);
 
   if (num<0)
   {
      printf("\nFactorial can't be found for negative");
      return 1;
   } 
 
   for(i=1;i<=num;i++)
   fact=fact*i;
   printf("\n");
   printf(" Factorial of %d is %d\n",num,fact);
   return 0;
}