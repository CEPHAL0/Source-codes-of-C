#include <stdio.h>
void main()
{
	int c;
	int a=21; int b=10;
	c=a+b;
	printf ("Line 1- Value of c is %d\n ", c);
	c=a-b;
	printf ("Line 2- Value of c is %d\n ", c);
	c=a*b;
	printf("Line 4- Value of c is %d\n ", c);
	c=a%b;
	printf("Line 5- Value of c is %d\n ", c);
	c=++a;
	printf("Line 6- Value of c is %d\n ", c);
	c=--a;
	printf("Line 7- Value of c is %d\n ", c);
	getch();
}
