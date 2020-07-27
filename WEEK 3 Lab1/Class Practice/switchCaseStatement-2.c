//Enter a character:u
//You typed something else
#include<stdio.h>
int main()
{
char choice;
printf("Enter a character:");
scanf("%c",&choice);
switch(choice)
{
case 'a':
printf("You typed a");
break;
case 'b':
printf("You typed b");
break;
default:
printf("You typed something else");
}
return 0;
}