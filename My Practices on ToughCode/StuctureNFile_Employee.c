/*Suppose, you are running a company where 50 employees work. 
Design a structure name Employee to store their Name, Age, Basic salary, Bonus and any other thing that is needed. 
Take all the data for all the employees from user. 
Write a function name emp_bonus(). For those persons who are older than 50 years, will get a bonus which is 40% of their basic salary.The rest of the people will get 25% bonus of their salary.
Print the name and the total salary of every employee. 
Open a text file name Employee_Data. If the file opens successfully, write all the employees name and age on that file. 

*/
#include <stdio.h>

struct employee
{
    char name[30];
    int age;
    float salary;
    float bonus;
};
float emp_bonus(float salary, int age)
{
    if (age > 2)
        return salary * 0.4;
    else
        return salary * 0.25;
}
int main()
{
    struct employee emp[2];
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter details :\n");
        printf("Employee Name ?:");
        scanf("%s", &emp[i].name);
        printf("Employee AGe ?:");
        scanf("%d", &emp[i].age);
        printf("Employee Salary ?:");
        scanf("%f", &emp[i].salary);
        emp[i].bonus = emp_bonus(emp[i].salary, emp[i].age);
    }
    FILE *fptr;
    fptr = fopen("Employee_Data.txt", "w");
    for (i = 0; i < 2; i++)
    {
        printf("\nEntered detail is\n:");
        printf("Employee Name: %s\n", emp[i].name);
        printf("Employee Age: %d\n", emp[i].age);
        printf("Employee Basic Salary: %f\n", emp[i].salary);
        printf("Employee Total Salary: %f\n", (emp[i].salary + emp[i].bonus));
        printf("Employee bonus: %f\n", emp[i].bonus);
        fprintf(fptr, "%s %d %f %f\n", emp[i].name, emp[i].age, emp[i].salary, emp[i].bonus);
    }
    fclose(fptr);
    return 0;
}