// Q.1. WAP to print greatest element using arrays and pointers

#include <stdio.h>
#include <stdlib.h>

int compare(int *array, int n)
{
    int i, temp = 0;
    for (i = 0; i < n; i++)
    {
        if (*(array + i) > temp)
        {
            temp = *(array + i);
        }
    }
    return temp;
}

int main()
{
    int n, i, greatest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of array[%d]: ", i);
        scanf("%d", &array[i]);
    }
    printf("The greatest element is: %d", compare(array, n));
}