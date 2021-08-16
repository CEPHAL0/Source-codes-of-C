//To use H = (b2+p2)^1/2
#include <stdio.h>
#include <conio.h>
int main()
{
	int b,p;
	float H;
	printf("Enter the value of b and p");
	scanf("%d %d",&b,&p);
	H=((b^2)+(p^2))^1/2;
	printf("The value of H is %f",H);
	return 0;
}
