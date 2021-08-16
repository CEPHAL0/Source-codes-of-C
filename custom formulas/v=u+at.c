//To use formula v=u+at
#include <stdio.h>
#include <conio.h>
int main()
{
	float v,u,a,t;
	printf("Enter the value of initial velocity, acceleration and time");
	scanf("%f %f %f",&u,&a,&t);
	v=u+(a*t);
	printf("The final velocity is %f",v);
	return 0;
}
