#include <stdio.h>
#include <conio.h>
void main()
{
	int a1;
	char ch;
	printf("Enter the number: \n");
		scanf("%d", &a1);
	printf ("Enter the character:\n");
		scanf(" %c", &ch);
	printf ("The number is: %d \n The character is: %c", a1,ch);
	getch();
}
