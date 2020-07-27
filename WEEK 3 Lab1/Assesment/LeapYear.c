//check whether a year is leap year or not
//OutPut:
//Enter a year: 1998
//1998 is not a leap year.
#include<stdio.h>
 int main()
 {
     int year, remainder;

     printf("Enter Year: ");
     scanf("%d",&year);

     remainder=((year%4==0)&&((year%400==0)||(year%100!=0)));

     switch(remainder)
     {

     case 1:
         printf("Leap Year.");
         break;

     case 0:
         printf("Not Leap Year.");
         break;

     default:
         printf("Invalid.");
         break;

     }

     return 0;
}