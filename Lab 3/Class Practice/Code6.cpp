//OutPut:
//Enter a Number:88
//Greater than 5
#include<stdio.h>
int main()
{
int i;
printf("Enter a Number:");
scanf("%d",&i);
if(i>0)
{
if(i<5)
{
printf("Greater than 0, less than 5");
}
else
{
printf("Greater than 5");
}
}
return 0;
}