#include<stdio.h>
int main()
{
printf(" Inter your Five Number For Making Average: ");
double var1, var2, var3, var4, var5;
int result;
scanf("%lf%lf%lf%lf%lf", &var1, &var2,&var3,&var4, &var5);
result = ((var1 + var2 + var3 +var4 + var5)/5);
printf("Average is:(%lf + %lf + %lf + %lf + %lf)/5 = %d\n", var1, var2, var3 , var4, var5, result);
return 0;
}