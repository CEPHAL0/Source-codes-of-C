#include <stdio.h>

int gst(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; ++i)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[n - 1];
}

int main()
{
    int n, i;
    printf("Enter total numbers: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter the %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe greatest of %d numbers is: %d", n, gst(arr, n));
    return 0;
}
