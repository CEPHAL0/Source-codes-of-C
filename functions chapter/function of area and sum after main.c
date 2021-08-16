#include <stdio.h>
int add(int, int);
float area(float);

int main(void)
{
	int a,b,mysum;
	float myarea,radius;
	printf("Enter the value of two numbers: ");
	scanf("%d %d", &a, &b);
	mysum=add(a,b);
	printf("Enter the radius: ");
	scanf("%f", &radius);
	printf("\nSum is %d", mysum);
	myarea=area(mysum);
	printf("\nThe area is %f", myarea);
	return 0;
}

int add(int a, int b)
{
	int sum;
	sum= a+b;
	return sum;
}
float area(float radius)
{
	return 3.1428*radius*radius;
}
