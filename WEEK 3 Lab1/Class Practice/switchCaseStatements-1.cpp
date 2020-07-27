#include<stdio.h>
int main()
{
int choice;
printf("Enter a number:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("You typed 1");
break;
case 2:
printf("You typed 2");
break;
case 3:
printf("You typed 3");
break;
default:
printf("You typed something else");
}
return 0;
}