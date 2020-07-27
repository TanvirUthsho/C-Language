//3
//4
//3.000000 + 4.000000 = 7.00
//3.000000 / 4.000000 = 0.75
#include<stdio.h>
int main()
{
double var1, var2;// var1=5, var2=25
double result1,result2;
scanf("%lf%lf", &var1, &var2);
result1 = var1 + var2;
result2 = var1 / var2;
printf("%lf + %lf = %.2lf\n", var1, var2, result1);
printf("%lf / %lf = %.2lf\n", var1, var2, result2);
//Output:
//5 25
//5.000000 + 25.000000 = 30.00
//5.000000 / 25.000000 = 0.20
return 0;
}