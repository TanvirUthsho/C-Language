#include <stdio.h>
double getAverage(int arr[], int size);
int main()
{
    int balance[5] = {204, 2, 23, 17, 550};
    double avg;
    avg = getAverage(balance, 5);
    printf("Average value:%f", avg);
    return 0;
}
double getAverage(int arr[], int size)
{
    int i;
    double avg;
    double sum;
    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = sum / size;
    return avg;
}
