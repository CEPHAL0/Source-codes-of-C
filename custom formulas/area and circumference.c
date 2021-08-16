 //Area and circumference of circle
#include <stdio.h>
#include <conio.h>
int main()
{
	float r;
	float A,C;
	printf("Enter the radius:");
		scanf("%f", &r);
	C=2*3.14*r;
	A=3.14*r*r;
	printf("The circumference is %f \n",C);
	printf("The Area is %f", A);
	return 0;
}
