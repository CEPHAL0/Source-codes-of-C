#include <stdio.h>
float percentage(float a,float b)
{
	float a,b,sum,percentage;
	sum=a+b;
	percentage=(sum/200)*100;
}
int main(void)
{
	float a,b,sum,mypercentage;
	printf("Enter the marks of two subjects: ");
	scanf("%f %f", &a, &b);
	mypercentage=percentage(a,b);
	printf("The percentage is %f", mypercentage);
}
