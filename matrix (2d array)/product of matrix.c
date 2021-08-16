#include <stdio.h>
#include <math.h>
void main()
{
    int m,n,o,p,i,j,k,sum;
    printf("Enter the value of rows of a: ");
    scanf("%d", &m);
    printf("\nEnter the value of columns of a: ");						
    scanf("%d", &n);														
    printf("\nEnter the value of rows of b: ");
    scanf("%d", &o);
    printf("\nEnter the value of columns in b: ");
    scanf("%d", &p);
    printf("\n");
    int a[m][n],b[o][p],product[m][p];
    sum=0;
    if (n==o)
    {
        /*For matrix A*/
		for (i=0;i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                printf("Enter the value of a[%d][%d]:",i,j);
                scanf("%d", &a[i][j]);
            }
        }
        printf("\n");
        
        /*For matrix B*/
        for(i=0; i<o; i++)
        {
            for (j=0; j<p; j++)
            {
                printf("Enter the value of b[%d][%d]:", i,j);
                scanf("%d", &b[i][j]);
            }
        }
        printf("\n");
        
        /*For product matrix*/
        printf("The product matrix is:\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<p; j++)
            {
                for(k=0; k<o; k++)
                {
                    sum += (a[i][k]*b[k][j]);
                }
                product[i][j]=sum;
                sum=0;
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
    printf("\nThe matrix cant be multiplied.");
    }
}

