#include<stdio.h>
int main()
{
int num;
printf("Enter a Number:");
scanf("%d",&num);
if(num>=90)
printf("Grade is A");
else if(num>=80 && num<90)
printf("Grade is B");
else if(num>=70 && num<80)
printf("Grade is C");
else
printf("Fail");
return 0;
}