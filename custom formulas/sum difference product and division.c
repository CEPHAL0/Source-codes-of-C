 //To print addition,subtraction,multiplication and division of any two numbers
#include <stdio.h>
#include <conio.h>
int main()
{
	float a,b,sum,product,difference;
	float division;
	printf("Enter the value of a,b");
		scanf("%f %f",&a,&b);
		sum=a+b;
		difference=a-b;
		product=a*b;
		division=a/b;
	printf("The sum is %f",sum);
	printf("\n The difference is %f", difference);
	printf("\n The product is %f", product);
	printf("\n The division is %f", division);
	return 0;		
}
