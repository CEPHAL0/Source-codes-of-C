#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,o,p,i,j,k;
	printf("Enter the value of rows of a: ");
	scanf("%d", &m);
	printf("\nEnter the value of columns of a: ");
	scanf("%d", &n);
	int a[m][n];
	printf("\nEnter the value of rows of b: ");
	scanf("%d", &o);
	printf("\nEnter the value of columns in b: ");
	scanf("%d", &p);
	int b[o][p];
	if (n==o)
	{
		for(i=0; i<m; i++)
		{
			for (j=0; j<n; j++)
			{
				printf("\nEnter the value of a[%d][%d]:",i,j);
				scanf("%d", &a[i][j]);
			}
		}
		for(i=0; i<o; i++)
		{
			for (j=0; j<p; j++)
			{
				printf("Enter the value of b[%d][%d]:", i,j);
				scanf("%d", &b[i][j]);	
			}	
		}
		for(i=0; i<m; i++)
		{
			for(j=0; j<p; j++)
			{
				for(k=0; k<o; k++)
				{
					c[i][j]+= a[i][k]*b[k][j];
				}
			}
		}
		printf("\nThe product of matrices are: ");
		for(i=0; i<m; i++)
		{
			for(j=0; j<p; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}	
	}
	else
	{
	printf("\nThe matrix cant be multiplied.");
	}
	return 0;
}
