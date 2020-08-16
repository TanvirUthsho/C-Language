//Program to find the number of times a value(key)appears in an array

#include <stdio.h>
int countSearchKey(int arr[], int size, int key); //including the countSearchKey function

int main()
{
    int n, i, x, z;

    printf("Enter array size:"); //array size
    scanf("%d", &n);
    int a[n];

    printf("Array Elements:");

    for (i = 0; i < n; i++) //for loop for putting input integers in array
    {
        scanf("%d", &a[i]);
    }

    printf("Search Key:"); //getting the key
    scanf("%d", &x);

    z = countSearchKey(a, n, x); //Using the function

    if (z == 0)
        printf("Search key does not appear");
    else
        printf("Search Key appears %d times", z);

    return 0;
}

//making the countSearchKey function
int countSearchKey(int arr[], int size, int key)
{
    int j, k = 0;

    for (j = 0; j < size; j++)
    {
        if (key == arr[j])
            k = k + 1; //for finding the number of times value(key) appears
    }

    return k; // returning the number of times value(key) appears
}
