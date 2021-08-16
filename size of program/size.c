#include <stdio.h>
void main()
{
	unsigned int x=2;
	double y=3;
	long int z=9;
	long double p=5;
	float w=3;
	char a;
	printf("The size of integer x is =%d", sizeof(x));
	printf("\nThe size of double y is=%d", sizeof(y));
	printf("\nThe size of long int z is=%d", sizeof(z));
	printf("\nThe size of float w is=%d", sizeof(w));
	printf("\nThe size of char a is=%d", sizeof(a));
	printf("\nThe size of long double p is=%d", sizeof(p));
}