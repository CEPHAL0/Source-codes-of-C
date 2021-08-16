#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int nums[10], i, j, n,temp;
    printf("How many data do you want to sort?\t");
    scanf("%d", &n);
    printf("\nEnter the numbers one by one:\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&nums[i]);
    }
    for (i=0; i<n-1; ++i)
    {
        for (j=i+1; j<n; j++)
        {
            if(nums[i]<nums[j])
            {
                temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
        }
    }
    system("cls");
    printf("The data sorted in descending order is:\n");
    for (i=0; i<n; i++)
    {
        printf("\t%d", nums[i]);
    }
}