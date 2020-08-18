#include <stdio.h>
int countPeople(int A[]);

int main()
{
    int a[14], i, result; //Declaring integer variables
    printf("Enter the ages of 15 persons:");
    i = 0;
    while (i < 15) //Using while loop for taking multiple inputs an sttore them in array
    {
        scanf("%d", &a[i]);
        i++;
    }
    result = countPeople(a); //using the function
    printf("\n\nNumber of persons between 40 to 60 inclusive: %d\n\n", result);

    return 0;
}

//The int countPeople(int A[]) function
int countPeople(int A[])
{
    int i = 0, count = 0;

    while (i < 15)
    {
        if (A[i] >= 40 && A[i] <= 60) //using if to determine when to count the ages
        {
            count = count + 1;
        }
        i++;
    }

    return count; //returning the count to main function
}