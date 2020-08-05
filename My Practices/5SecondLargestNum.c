#include <stdio.h>
int main()
{
       int num, large = 0, slarge = 0, i = 0;
       printf("Enter Three numbers:");
       while (i < 3)
       {
              scanf("%d", &num);
              if (i == 0)
              {
                     large = num;
              }
              else if (num > large)
              {
                     slarge = large;
                     large = num;
              }
              else if (num > slarge)
              {
                     slarge = num;
              }
              i++;
       }
       printf("\nSecond largest is  %d", slarge);
       return 0;
}