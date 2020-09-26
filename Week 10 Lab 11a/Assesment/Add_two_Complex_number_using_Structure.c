#include <stdio.h>

struct Complex //declaring data type name "struct Complex"
{
    float real;
    float imag;
};

struct Complex add(struct Complex n1, struct Complex n2); //Declaring function for summation

int main()
{
    struct Complex P, Q, R; //Declaring variables of user defined data type

    printf("Enter First number real value: "); //Taking inputs
    scanf("%f", &P.real);

    printf("Enter First number imaginary value: ");
    scanf("%f", &P.imag);

    printf("\nEnter Second number real value: ");
    scanf("%f", &Q.real);

    printf("Enter Second number imaginary value: ");
    scanf("%f", &Q.imag);

    R = add(P, Q); //Calling the function by values

    printf("\nresult real value: %f", R.real);
    printf("\nresult real value: %f\n", R.imag);

    return 0;
}

struct Complex add(struct Complex n1, struct Complex n2)
{
    struct Complex r; //declaring variable of user defined data type

    r.real = n1.real + n2.real;
    r.imag = n1.imag + n2.imag;

    return r;
}