//To use s=ut+1/2at^2
#include <stdio.h>
#include <conio.h>
int main()
{
	int s,u,t,a;
	printf("Enter the value of initial velocity, time and acceleration");
	scanf("%d %d %d",&u,&t,&a);
	s=(u*t)+(1/2*a*t*t);
	printf("The displacement is %d",s);
	return 0;
}
