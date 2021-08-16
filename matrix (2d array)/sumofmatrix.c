#include <stdio.h>
int main(void)
{
    int m, n, a[m][n], b[m][n],sum[m][n], i, j;
    printf("Enter the value of rows: ");
    scanf("%d", &m);
    printf("Enter the value of column: ");
    scanf("%d", &n);
	printf("\n");
    //For matrix A//
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Enter the value of a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
	printf("\n");
    //For matrix B//
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            printf("Enter the value of b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nThe value of sum of matrix is:\n");
    for  (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {
            sum[i][j]= a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
}