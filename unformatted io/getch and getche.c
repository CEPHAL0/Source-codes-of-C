#include <stdio.h>
#include <conio.h>
int main()
{
	char ch1,ch2;
	printf("Enter 1st character:");
	ch1 = getch();
	printf("\n Enter 2nd character:");
	ch2 = getche();
	printf("\n The first character is:");
	putch(ch1);
	printf("\n The second character is:");
	putch(ch2);
	return 0;
}
