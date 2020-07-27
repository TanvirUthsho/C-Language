//Enter the value of a and b:1 2        
//This is part of outer switch
//This is part of inner switch
#include <stdio.h>
int main ()
{
int a,b;
printf("Enter the value of a and b:");
scanf("%d %d",&a, &b);
switch(a)
{
case 1:
printf("This is part of outer switch\n", a );
switch(b)
{
case 2:
printf("This is part of inner switch\n", a );
break;
default:
printf("Inner switch default value\n");
}
break;
default:
printf("Default value\n");
}
return 0;
}