#include <stdio.h>
#include <conio.h>

void main()
{
	int day,year,month;
	
	printf("enter day year month");
		scanf("%d-%d-%d", &day,&month,&year);
	printf("%d-%d-%d", day,month,year);
	getch();
}
