#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,n,nums[10],temp;
    printf("Enter how many data are there:");
    scanf("%d", &n);
    for (i=0; i<n-1; i++)
    {
        printf("\nEnter the value of data:");
        scanf(" %d", &nums[i]);
    }
    for (i=0; i<n-1; ++i)
    {
        for (j=i+1; j<n; j++)
        {
            if (nums[i]>nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    system("cls");
    printf("The value of second smallest element is: %d", nums[1]);
    printf("\nThe biggest element is: %d", nums[n-1]);
}