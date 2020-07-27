#include<stdio.h>
int main()
{
int i,j=3;
printf("Enter a Number:");
scanf("%d",&i);
if(i>0)
{
if(i<j)
{
printf("Greater than 0, less than J");
}
else
{
printf("Greater than J");
}
}
else
{
printf("Less than 0");
}
return 0;
}