#include<stdio.h>
int main()
{
int choice;
printf("Enter a number:");
scanf("%d",&choice);
switch(choice)
{
case 1:
case 2:
printf("You typed 1 or 2");
break;
case 3:
case 4:
printf("You typed 3 or 4");
break;
default:
printf("You typed something else");
}
return 0;
}