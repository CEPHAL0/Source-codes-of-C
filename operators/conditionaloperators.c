#include <stdio.h>
void main()
{
	int n1,n2,larger;
	printf("Enter two numbers:");
	scanf("%d %d", &n1, &n2);
	larger= n1>n2 ? n1 : n2;
	printf("The larger number is %d", larger);
}
