#include <stdio.h>

//Including the void function
void search(int arr[], int size, int key);

int main()
{
    int i, n, z; //Declaring variables

    printf("Enter array size:"); //getting array size
    scanf("%d", &n);
    int a[n];

    printf("Array Elements:");

    for (i = 0; i < n; i++) //putting the elements in array using for loop
    {
        scanf("%d", &a[i]);
    }

    printf("Search Key:"); //taking search key as input
    scanf("%d", &z);

    search(a, n, z); //using the void search function

    return 0;
}
//making the void search function
void search(int arr[], int size, int key)
{
    int j, flag = 0; //using flag value

    for (j = 0; j < size; j++)
    {
        if (key == arr[j]) //if found flag value becomes 1
            flag = 1;
        if (key == arr[j]) //the loop stops if found
            break;
    }

    if (flag == 1) //using flag valye to determine found or not
        printf("Found");
    else
        printf("Not Found");
}