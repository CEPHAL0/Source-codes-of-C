//data = 20,10,30,60,5//
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int nums[10], i,j,n,temp;
    printf("How many numbers are there?\t");
    scanf("%d",&n);
    printf("\nEnter %d numbers: \n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);
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
    system ("cls");
    printf("\nThe numbers in ascending order are:\n");
    for (i=0; i<n; i++)
    {
        printf("\t%d",nums[i]);
    }
    printf("\n");
}