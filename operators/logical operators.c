#include <stdio.h>
#include <conio.h>
void main()
{
	int a=1;
	int b=0;
	if (a&&b)
	{
		printf("Line 1- Condition is true\n");
	}
	else
	{
		printf("Line 1- Condition is false\n");
	}
	if (a||b)
	{
		printf("Line 2- Condition is true\n");
	}
	else 
	{
		printf("Line 2- Condition is false\n");
	}
	if (!(a&&b))
	{
		printf("Line 3- Condition is true\n");
	}
	else
	{
		printf("Line 30 Condition is false\n");
	}
}
