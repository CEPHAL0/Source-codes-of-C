#include <stdio.h>
void main()
{
	int temperature;
	char humid;
	printf("Enter the temperature of boiler:\n");
	scanf("%d", &temperature);
	if (temperature<=100)
	{
		printf("Is the humidity there (y/n):\n");
		getch(humid);
		if (humid=="y")
		{
			printf("The boiler is ready to disconnect");
		}
		else
		{
			printf("The boiler is not ready to disconnect");
		}
	}
	else
	{
		printf("The boiler is ready to disconnect and temperature exceeds 100");
	}
}
