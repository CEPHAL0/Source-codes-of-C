#include <stdio.h>
int add(int a, int b) //Definition part//
{
	int sum;
	sum= a+b;
	return sum;
}
float area(float radius)
{
	return 3.1428*radius*radius;
}
int main(void)
{
	int a,b,mysum; 
	float myarea;
	printf("Enter the value of two numbers: ");
	scanf("%d %d", &a, &b);
	mysum=add(a,b); /*accessing function*/
	printf("\nSum is %d", mysum);
	myarea=area(mysum);
	printf("\nThe area is %f", myarea);
}
